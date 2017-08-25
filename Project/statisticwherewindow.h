#ifndef STATISTICWHEREWINDOW_H
#define STATISTICWHEREWINDOW_H


#include <QMainWindow>
#include <QObject>
#include <QWidget>
#include "ui_statisticwhere.h"
#include <QPushButton>
#include <QTextEdit>
#include <QString>
#include <QStandardItem>
#include <QStandardItemModel>
#include <QLineEdit>
#include <QAction>
#include <algorithm>
#include <map>
#include <vector>
extern "C"{
#include "../data.h"
#include "../utils.h"
}

typedef std::map<QString,int> MapType;

namespace Ui {
class StatisticWhereWindow;
}

class StatisticWhereWindow : public QMainWindow
{
    Q_OBJECT

public:
    StatisticWhereWindow(List *gradeList, QWidget *parent = 0);

private:
    Ui::StatisticWhereWindow *ui;
    List *gradeList;
    List *studentList;
    QStandardItemModel *model;
    QString queryName;
    std::map<QString,int> *map;
    std::vector<std::pair<QString,int>> *pairs = NULL;

    void showWhere();
    void getMap();


public slots:
    void onRequest();

};

#endif // STATISTICWHEREWINDOW_H
