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
#include <QModelIndex>
#include <QVariant>
#include <set>
#include <QDialog>
#include <QLabel>
#include <QTextEdit>
#include <vector>
#include "ui_searchgrade.h"
#include "gradedialog.h"
#include "classdialog.h"
#include "studentdialog.h"
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
    QAction *sortGradeAction;
    QAction *sortClassAction;
    QAction *sortStudentAction;
    QStandardItemModel *model;
    State currentState;
    List* gradeList = NULL;
    List* classList = NULL;
    list* studentList = NULL;
    GradeDialog *gradeDialog = NULL;
    ClassDialog *classDialog = NULL;
    StudentDialog *studentDialog = NULL;

    void test();
    void createActions();
    void showGrades(List* grade_list);
    void showClasses(List* class_list);
    void showStudents(List* student_list);
    void setButtons(int num, int pos,const QString &text);
    QList<QStandardItem*> readGradeData(Node *gradeNode);
    QList<QStandardItem*> readClassData(Node *classNode);
    QList<QStandardItem*> readStudentData(Node *studentNode);
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
    void onBack();
    void onForward();
    void onDataChanged(QModelIndex index1, QModelIndex index2, QVector<int> vector);
    void onDelete();
    void onGradeAc(QString, QString, QString, QString, QString);
    void onClassAc(QString, QString, QString, QString, QString);
    void onStudentAc(QString, QString, QString, QString, QString, QString, QString, QString);
    void onGradeSort();
    void onClassSort();
    void onStudentSort();

};

#endif // MAINWINDOW_H
