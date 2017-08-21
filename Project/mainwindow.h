#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMenu>
#include <QAction>
#include <QDebug>
#include <QTableView>
#include <QStandardItem>
#include <QStandardItemModel>
#include <QList>
#include <QHeaderView>
#include <QPushButton>
#include "qvpushbutton.h"

extern "C"{
#include "../data.h"
}
namespace Ui {
class MainWindow;
}

typedef enum{GRADE, CLASS_, STUDENT} State;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QAction *saveAction;
    QAction *loadAction;
    QAction *inputGradeAction;
    QAction *inputClassAction;
    QAction *inputStudentAction;
    QAction *searchGradeAction;
    QAction *searchClassAction;
    QAction *searchStudentAction;
    QStandardItemModel *model;
    State currentState;
    List* currentList;

    void test();
    void createActions();
    void showGrades(List* grade_list);
    void setButtons(int num, int pos,const QString &text);
    QList<QStandardItem*> readGradeData(Node *gradeNode);
public slots:
    void onSave();
    void onLoad();
    void onInputGrade();
    void onInputClass();
    void onInputStudent();
    void onSearchGrade();
    void onSearchClass();
    void onSearchStudent();
    void onReceiveButton(int position);
};

#endif // MAINWINDOW_H
