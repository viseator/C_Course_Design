#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    createActions();
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::createActions(){
    saveAction = new QAction("保存", this);
    loadAction = new QAction("读取", this);
    ui->fileMenu->addAction(saveAction);
    ui->fileMenu->addAction(loadAction);

    inputGradeAction = new QAction("添加年级", this);
    inputClassAction = new QAction("添加班级", this);
    inputStudentAction = new QAction("添加学生", this);
    ui->inputMenu->addAction(inputGradeAction);
    ui->inputMenu->addAction(inputClassAction);
    ui->inputMenu->addAction(inputStudentAction);

    searchGradeAction = new QAction("查找年级", this);
    searchClassAction = new QAction("查找班级", this);
    searchStudentAction = new QAction("查找学生", this);
    ui->inputMenu->addAction(searchGradeAction);
    ui->inputMenu->addAction(searchClassAction);
    ui->inputMenu->addAction(searchStudentAction);

    connect(saveAction, &QAction::triggered, this, &MainWindow::onSave);
    connect(loadAction, &QAction::triggered, this, &MainWindow::onLoad);
    connect(inputGradeAction, &QAction::triggered, this, &MainWindow::onInputGrade);
    connect(inputClassAction, &QAction::triggered, this, &MainWindow::onInputClass);
    connect(inputStudentAction, &QAction::triggered, this, &MainWindow::onInputStudent);
    connect(searchGradeAction, &QAction::triggered, this, &MainWindow::onSearchGrade);
    connect(searchClassAction, &QAction::triggered, this, &MainWindow::onSearchClass);
    connect(searchStudentAction, &QAction::triggered, this, &MainWindow::onSearchStudent);
}

void MainWindow::onSave(){
    qDebug() << "Test";
}

void MainWindow::onLoad(){

}

void MainWindow::onInputGrade(){

}

void MainWindow::onInputClass(){

}

void MainWindow::onInputStudent(){

}

void MainWindow::onSearchGrade(){

}

void MainWindow::onSearchClass(){

}

void MainWindow::onSearchStudent(){

}
