#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
    createActions();
    test();
}

MainWindow::~MainWindow() { delete ui; }

void MainWindow::test() {
    qDebug() << "Test";
    List *grade_list = init_list(sizeof(Grade));
    addGrade(grade_list, "2017", "20170101", 100, 0, "LiJin", "12312341234", "ChenZhuo");
    addGrade(grade_list, "2017", "20170101", 100, 0, "LiJin", "12312341234", "ChenZhuo");
    addGrade(grade_list, "2017", "20170101", 100, 0, "LiJin", "12312341234", "ChenZhuo");
    addGrade(grade_list, "2017", "20170101", 100, 0, "LiJin", "12312341234", "ChenZhuo");
    addGrade(grade_list, "2017", "20170101", 100, 0, "LiJin", "12312341234", "ChenZhuo");
    addGrade(grade_list, "2017", "20170101", 100, 0, "LiJin", "12312341234", "ChenZhuo");
    addClass((getGrade(grade_list, 2)), "CS1609", "计算机", 100, 10.1, 101, "Yuan", "12312341234",
             "Yuan", "12312341234");
    addClass((getGrade(grade_list, 2)), "CS1609", "计算机", 100, 10.1, 101, "Yuan", "12312341234",
             "Yuan", "12312341234");
    addClass((getGrade(grade_list, 3)), "CS1609", "计算机", 100, 10.1, 101, "Yuan", "12312341234",
             "Yuan", "12312341234");
    addStudent(getClass(getGrade(grade_list, 2)->classes, 1), "U201614753", "吴迪111", "1",
               "YUSHAN", "19971024", "13479343728", 666, 18, false, "Ali");
    addStudent(getClass(getGrade(grade_list, 2)->classes, 0), "U201614753", "吴迪222", "1",
               "YUSHAN", "19971024", "13479343728", 666, 18, false, "Ali");
    addStudent(getClass(getGrade(grade_list, 3)->classes, 0), "U201614753", "吴迪333", "1",
               "YUSHAN", "19971024", "13479343728", 666, 18, false, "Ali");
    saveGradeToFile(grade_list);
    showGrades(grade_list);
}

void MainWindow::createActions() {
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
    ui->searchMenu->addAction(searchGradeAction);
    ui->searchMenu->addAction(searchClassAction);
    ui->searchMenu->addAction(searchStudentAction);

    connect(saveAction, &QAction::triggered, this, &MainWindow::onSave);
    connect(loadAction, &QAction::triggered, this, &MainWindow::onLoad);
    connect(inputGradeAction, &QAction::triggered, this, &MainWindow::onInputGrade);
    connect(inputClassAction, &QAction::triggered, this, &MainWindow::onInputClass);
    connect(inputStudentAction, &QAction::triggered, this, &MainWindow::onInputStudent);
    connect(searchGradeAction, &QAction::triggered, this, &MainWindow::onSearchGrade);
    connect(searchClassAction, &QAction::triggered, this, &MainWindow::onSearchClass);
    connect(searchStudentAction, &QAction::triggered, this, &MainWindow::onSearchStudent);
}

void MainWindow::onSave() {}

void MainWindow::onLoad() {}

void MainWindow::onInputGrade() {}

void MainWindow::onInputClass() {}

void MainWindow::onInputStudent() {}

void MainWindow::onSearchGrade() {}

void MainWindow::onSearchClass() {}

void MainWindow::onSearchStudent() {}

void MainWindow::showGrades(List *grade_list) {
    currentState = GRADE;
    currentList = grade_list;
    model = new QStandardItemModel(this);
    model->setHorizontalHeaderItem(0, new QStandardItem(QString("年级编号")));
    model->setHorizontalHeaderItem(1, new QStandardItem(QString("入学时间")));
    model->setHorizontalHeaderItem(2, new QStandardItem(QString("入学人数")));
    model->setHorizontalHeaderItem(3, new QStandardItem(QString("毕业人数")));
    model->setHorizontalHeaderItem(4, new QStandardItem(QString("年级辅导员姓名")));
    model->setHorizontalHeaderItem(5, new QStandardItem(QString("辅导员联系电话")));
    model->setHorizontalHeaderItem(6, new QStandardItem(QString("年级学生会主席")));
    model->setHorizontalHeaderItem(7, new QStandardItem(QString("查看")));
    Node *head = getFirst(grade_list);
    while (NULL != head) {
        model->appendRow(MainWindow::readGradeData(head));
        head = head->next;
    }
    ui->tableView->setModel(model);
    ui->tableView->resizeColumnsToContents();
    setButtons(model->rowCount(), 7, QString("test"));
}

QList<QStandardItem *> MainWindow::readGradeData(Node *gradeNode) {
    QList<QStandardItem *> result = QList<QStandardItem *>();
    Grade *data = (Grade *)gradeNode->data;
    result.append(new QStandardItem(QString::fromUtf8(data->id)));
    result.append(new QStandardItem(QString::fromUtf8(data->time)));
    result.append(new QStandardItem(QString::number(data->num)));
    result.append(new QStandardItem(QString::number(data->gra_num)));
    result.append(new QStandardItem(QString::fromUtf8(data->coun_name)));
    result.append(new QStandardItem(QString::fromUtf8(data->coun_phone)));
    result.append(new QStandardItem(QString::fromUtf8(data->chairman)));
    result.append(new QStandardItem(QString("Button")));
    return result;
}

void MainWindow::setButtons(int num, int pos, const QString &text){
    for(int i = 0; i < num; i++){
        ui->tableView->setIndexWidget(model->index(i, pos),new QVPushButton(text, i));
    }
}

void MainWindow::onReceiveButton(int position){
    if(currentState == GRADE){
        Grade* grade = static_cast<Grade*> (getData(currentList, position));
        List* class_list = grade->classes;

    }
}
