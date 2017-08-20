#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMenu>
#include <QAction>
#include <QDebug>

namespace Ui {
class MainWindow;
}

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

    void createActions();

public slots:
    void onSave();
    void onLoad();
    void onInputGrade();
    void onInputClass();
    void onInputStudent();
    void onSearchGrade();
    void onSearchClass();
    void onSearchStudent();
};

#endif // MAINWINDOW_H
