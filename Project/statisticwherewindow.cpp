#include "statisticwherewindow.h"

bool compareByValue(const std::pair<QString,int>& lhs, const std::pair<QString,int>& rhs) {
    return lhs.second > rhs.second;
}

StatisticWhereWindow::StatisticWhereWindow(List *gradeList, QWidget *parent): QMainWindow(parent),ui(new Ui::StatisticWhereWindow), gradeList(gradeList)
{
    ui->setupUi(this);
    connect(ui->pushButton, SIGNAL(clicked(bool)), this, SLOT(onRequest()));
    map = new std::map<QString,int>();
}


void StatisticWhereWindow::onRequest(){
    if(ui->textEdit->toPlainText() != "" && ui->textEdit_2->toPlainText() != ""){
        gradeList = getGradeByTime(gradeList, ui->textEdit->toPlainText().toInt(),ui->textEdit_2->toPlainText().toInt());
    }
    queryName = ui->textEdit_3->toPlainText();
    studentList = getAllStudent(gradeList);
    getMap();
    showWhere();
}

void StatisticWhereWindow::getMap(){
    Node *head = getFirst(studentList);
    map->clear();
    while(NULL != head){
        QString where = QString::fromUtf8(((Student*) head->data)->where);
        if(where.indexOf(queryName) != -1){
            MapType::iterator it = map->find(where);
            if(it == map->end()){
                map->insert(MapType::value_type(where,1));
            }else{
                it->second= it->second + 1;
            }
        }
        head = head->next;
    }

    if(pairs != NULL){
        delete pairs;
    }
    pairs = new std::vector<std::pair<QString,int>>(map->begin(),map->end());
    std::sort(pairs->begin(),pairs->end(),compareByValue);
}

void StatisticWhereWindow::showWhere(){
    model = new QStandardItemModel(this);
    model->setHorizontalHeaderItem(0, new QStandardItem(QString("公司名称")));
    model->setHorizontalHeaderItem(1, new QStandardItem(QString("人数")));
    for(std::vector<std::pair<QString,int>>::iterator it = pairs->begin(); it != pairs->end(); it++){
        QList<QStandardItem *> result = QList<QStandardItem *>();
        std::pair<QString,int> vpair = (*it);
        result.append(new QStandardItem(vpair.first));
        result.append(new QStandardItem(QString::number(vpair.second)));
        model->appendRow(result);
    }
    ui->tableView->setModel(model);
    ui->tableView->resizeColumnsToContents();
}







