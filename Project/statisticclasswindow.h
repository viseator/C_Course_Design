#ifndef STATISTICCLASSWINDOW_H
#define STATISTICCLASSWINDOW_H


#include <QMainWindow>
#include <QObject>
#include <QWidget>
#include "ui_statisticclass.h"
#include <QPushButton>
#include <QTextEdit>
#include <QString>
#include <QStandardItem>
#include <QStandardItemModel>
#include <QLineEdit>
#include <QAction>
extern "C"{
#include "../data.h"
}

namespace Ui {
class StatisticClassWindow;
}

class StatisticClassWindow : public QMainWindow
{
    Q_OBJECT

public:
    StatisticClassWindow(List *gradeList, QWidget *parent = 0);

private:
    Ui::StatisticClassWindow *ui;
    List *gradeList;
    List *classList;
    QStandardItemModel *model;

    QList<QStandardItem *> readClassData(Node *classNode);
    void showClass(List *class_list);

public slots:
    void onRequest();
};

#endif // STATISTICCLASSWINDOW_H
