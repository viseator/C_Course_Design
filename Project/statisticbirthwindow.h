#ifndef STATISTICBIRTHWINDOW_H
#define STATISTICBIRTHWINDOW_H


#include <QMainWindow>
#include <QObject>
#include <QWidget>
#include "ui_statisticbirth.h"
#include <QPushButton>
#include <QTextEdit>
#include <QString>
#include <QStandardItem>
#include <QStandardItemModel>
#include <QLineEdit>
#include <QAction>
#include <map>
#include <vector>
#include <algorithm>
extern "C"{
#include "../data.h"
}

namespace Ui {
class StatisticBirthWindow;
}


class StatisticBirthWindow : public QMainWindow
{
    Q_OBJECT

public:
    StatisticBirthWindow(List *gradeList, QWidget *parent = 0);

private:
    Ui::StatisticBirthWindow *ui;
    List *gradeList;
    List *studentList;
    int min;
    int max;
    QStandardItemModel *model;
    std::map<int, int> *map;
    void getMap();
    void showBirth();

public slots:
    void onRequest();
};

#endif // STATISTICCLASSWINDOW_H
