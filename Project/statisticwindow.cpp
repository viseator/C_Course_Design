#include "statisticwindow.h"

StatisticWindow::StatisticWindow(List *gradeList, QWidget *parent) :QMainWindow(parent), ui(new Ui::StatisticWindow), gradeList(gradeList)
{
    ui->setupUi(this);
    connect(ui->pushButton, SIGNAL(clicked(bool)), this, SLOT(onRequest()));
    connect(ui->SGradeSortAction, SIGNAL(triggered(bool)), this, SLOT(onSortId()));
    connect(ui->SNumSortAction, SIGNAL(triggered(bool)), this, SLOT(onSortNum()));
    connect(ui->SUngraSortAction, SIGNAL(triggered(bool)), this, SLOT(onSortUngra()));
}

void StatisticWindow::onRequest(){
    if(ui->textEdit->toPlainText() != "" && ui->textEdit_2->toPlainText() != ""){
        gradeList = getGradeByTime(gradeList, ui->textEdit->toPlainText().toInt(),ui->textEdit_2->toPlainText().toInt());
    }

    showGrades(gradeList);
}


void StatisticWindow::showGrades(List *grade_list) {
    initCount();
    gradeList = grade_list;
    model = new QStandardItemModel(this);
    model->setHorizontalHeaderItem(0, new QStandardItem(QString("年级编号")));
    model->setHorizontalHeaderItem(1, new QStandardItem(QString("班级数")));
    model->setHorizontalHeaderItem(2, new QStandardItem(QString("入学人数")));
    model->setHorizontalHeaderItem(3, new QStandardItem(QString("毕业人数")));
    model->setHorizontalHeaderItem(4, new QStandardItem(QString("未毕业人数")));
    Node *head = getFirst(grade_list);
    while (NULL != head) {
        model->appendRow(StatisticWindow::readGradeData(head));
        head = head->next;
    }
    ui->tableView->setModel(model);
    ui->tableView->resizeColumnsToContents();
    showTotal();
}

QList<QStandardItem *> StatisticWindow::readGradeData(Node *gradeNode) {
    QList<QStandardItem *> result = QList<QStandardItem *>();
    Grade *data = (Grade *)gradeNode->data;
    totalClass += data->classes->length;
    totalGra += data->gra_num;
    totalNum += data->num;
    totalUngra += data->num - data->gra_num;
    result.append(new QStandardItem(QString::fromUtf8(data->id)));
    result.append(new QStandardItem(QString::number(data->classes->length)));
    result.append(new QStandardItem(QString::number(data->num)));
    result.append(new QStandardItem(QString::number(data->gra_num)));
    result.append(new QStandardItem(QString::number(data->num - data->gra_num)));
    return result;
}

void StatisticWindow::showTotal(){
    ui->lineEdit->setText(QString("总班级数： ") + QString::number(totalClass) + QString("   总入学人数: ") + QString::number(totalNum) + QString("   总毕业人数： ")+ QString::number(totalGra) + QString("   总未毕业人数：　") + QString::number(totalUngra));
}

void StatisticWindow::onSortId(){
    sortGradeById(gradeList);
    showGrades(gradeList);
}

void StatisticWindow::onSortNum(){
    sortGradeByNum(gradeList);
    showGrades(gradeList);
}

void StatisticWindow::onSortUngra(){
    sortGradeByUnGra(gradeList);
    showGrades(gradeList);
}

void StatisticWindow::initCount(){
    totalClass = 0;
    totalGra = 0;
    totalNum = 0;
    totalUngra = 0;
}
