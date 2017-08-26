#include "statisticbirthwindow.h"

StatisticBirthWindow::StatisticBirthWindow(List *gradeList, QWidget *parent) : QMainWindow(parent),ui(new Ui::StatisticBirthWindow), gradeList(gradeList)
{
    ui->setupUi(this);
    connect(ui->pushButton, SIGNAL(clicked(bool)), this, SLOT(onRequest()));
    map = new std::map<int, int>();
}

void StatisticBirthWindow::onRequest(){
    if(ui->textEdit->toPlainText() != "" && ui->textEdit_2->toPlainText() != ""){
        min = ui->textEdit->toPlainText().toInt();
        max = ui->textEdit_2->toPlainText().toInt();
    }else{
        min = -1;
        max = -1;
    }
    studentList = getAllStudent(gradeList);
    getMap();
    showBirth();
}

void StatisticBirthWindow::showBirth(){
    model = new QStandardItemModel(this);
    model->setHorizontalHeaderItem(0, new QStandardItem(QString("出生年份")));
    model->setHorizontalHeaderItem(1, new QStandardItem(QString("人数")));
    for(std::map<int, int>::iterator pairs = map->begin(); pairs != map->end(); pairs++){
        QList<QStandardItem *> result = QList<QStandardItem *>();
        result.append(new QStandardItem(QString::number(pairs->first)));
        result.append(new QStandardItem(QString::number(pairs->second)));
        model->appendRow(result);
    }
    ui->tableView->setModel(model);
    ui->tableView->resizeColumnsToContents();
}

void StatisticBirthWindow::getMap(){
    Node *head = getFirst(studentList);
    map->clear();
    while(NULL != head){
        QString birthday = QString::fromUtf8(((Student*) head->data)->birth);
        int birth = birthday.left(4).toInt();
        if(min == -1 || (birth >= min && birth <=max)){
            std::map<int, int>::iterator it = map->find(birth);
            if(it == map->end()){
                map->insert(std::map<int, int>::value_type(birth,1));
            }else{
                it->second= it->second + 1;
            }
        }
        head = head->next;
    }


}
