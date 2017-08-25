#ifndef STATISTICWINDOW_H
#define STATISTICWINDOW_H

#include <QMainWindow>
#include <QObject>
#include <QWidget>
#include "ui_statisticgrade.h"
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
class StatisticWindow;
}

class StatisticWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit StatisticWindow(List *gradeList, QWidget *parent = 0);
private:
    Ui::StatisticWindow *ui;
    List *gradeList;
    QStandardItemModel *model;
    int totalClass = 0;
    int totalNum = 0;
    int totalGra = 0;
    int totalUngra = 0;


    QList<QStandardItem *> readGradeData(Node *gradeNode);
    void showGrades(List *grade_list);
    void showTotal();
    void initCount();

public slots:
    void onRequest();
    void onSortId();
    void onSortNum();
    void onSortUngra();
};

#endif // STATISTICWINDOW_H
