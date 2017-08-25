#include "statisticclasswindow.h"

StatisticClassWindow::StatisticClassWindow(List *gradeList, QWidget *parent) : QMainWindow(parent),ui(new Ui::StatisticClassWindow), gradeList(gradeList)
{
    ui->setupUi(this);
    connect(ui->pushButton, SIGNAL(clicked(bool)), this, SLOT(onRequest()));
}

void StatisticClassWindow::onRequest(){
    if(ui->textEdit->toPlainText() != "" && ui->textEdit_2->toPlainText() != ""){
        gradeList = getGradeByTime(gradeList, ui->textEdit->toPlainText().toInt(),ui->textEdit_2->toPlainText().toInt());
    }
    showClass(gradeList);
}

void StatisticClassWindow::showClass(List *grade_list){
    classList = getAllClass(grade_list);
    model = new QStandardItemModel(this);
    model->setHorizontalHeaderItem(0, new QStandardItem(QString("班级")));
    model->setHorizontalHeaderItem(1, new QStandardItem(QString("未毕业人数")));
    sortClassByUnGra(classList);
    Node *head = getFirst(classList);
    while (NULL != head) {
        model->appendRow(StatisticClassWindow::readClassData(head));
        head = head->next;
    }
    ui->tableView->setModel(model);
    ui->tableView->resizeColumnsToContents();
}

QList<QStandardItem *> StatisticClassWindow::readClassData(Node *classNode){
    QList<QStandardItem *> result = QList<QStandardItem *>();
    Class *data = (Class *)classNode->data;
    result.append(new QStandardItem(QString::fromUtf8(data->id)));
    result.append(new QStandardItem(QString::number(data->num - data->gra_num)));
    return result;
}
