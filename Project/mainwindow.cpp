#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
    connect(ui->backAction, SIGNAL(triggered(bool)), this, SLOT(onBack()));
    connect(ui->forwradAction, SIGNAL(triggered(bool)), this, SLOT(onForward()));
    createActions();
    onLoad();
    //    test();
}

MainWindow::~MainWindow() { delete ui; }

void MainWindow::test() {
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

void MainWindow::onSave() {
    saveGradeToFile(gradeList);
}

void MainWindow::onLoad() {
    gradeList = readGradeFromFile();
    showGrades(gradeList);
}

void MainWindow::onInputGrade() {}

void MainWindow::onInputClass() {}

void MainWindow::onInputStudent() {}

void MainWindow::onSearchGrade() {}

void MainWindow::onSearchClass() {}

void MainWindow::onSearchStudent() {}

void MainWindow::showGrades(List *grade_list) {
    currentState = GRADE;
    gradeList = grade_list;
    model = new QStandardItemModel(this);
    connect(model, SIGNAL(dataChanged(QModelIndex,QModelIndex,QVector<int>)), this, SLOT(onDataChanged(QModelIndex,QModelIndex,QVector<int>)));
    model->setHorizontalHeaderItem(0, new QStandardItem(QString("年级编号")));
    model->setHorizontalHeaderItem(1, new QStandardItem(QString("入学时间")));
    model->setHorizontalHeaderItem(2, new QStandardItem(QString("入学人数")));
    model->setHorizontalHeaderItem(3, new QStandardItem(QString("毕业人数")));
    model->setHorizontalHeaderItem(4, new QStandardItem(QString("年级辅导员姓名")));
    model->setHorizontalHeaderItem(5, new QStandardItem(QString("辅导员联系电话")));
    model->setHorizontalHeaderItem(6, new QStandardItem(QString("年级学生会主席")));
    model->setHorizontalHeaderItem(7, new QStandardItem(QString("查看班级")));
    Node *head = getFirst(grade_list);
    while (NULL != head) {
        model->appendRow(MainWindow::readGradeData(head));
        head = head->next;
    }
    ui->tableView->setModel(model);
    ui->tableView->resizeColumnsToContents();
    setButtons(model->rowCount(), 7, QString("查看班级"));
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

void MainWindow::showClasses(List* class_list){
    currentState = CLASS_;
    classList = class_list;
    delete model;
    model = new QStandardItemModel(this);
    connect(model, SIGNAL(dataChanged(QModelIndex,QModelIndex,QVector<int>)), this, SLOT(onDataChanged(QModelIndex,QModelIndex,QVector<int>)));
    model->setHorizontalHeaderItem(0, new QStandardItem(QString("班级编号")));
    model->setHorizontalHeaderItem(1, new QStandardItem(QString("专业名称")));
    model->setHorizontalHeaderItem(2, new QStandardItem(QString("入学人数")));
    model->setHorizontalHeaderItem(3, new QStandardItem(QString("入学平均年龄")));
    model->setHorizontalHeaderItem(4, new QStandardItem(QString("毕业人数")));
    model->setHorizontalHeaderItem(5, new QStandardItem(QString("班长姓名")));
    model->setHorizontalHeaderItem(6, new QStandardItem(QString("班长联系电话")));
    model->setHorizontalHeaderItem(7, new QStandardItem(QString("班主任姓名")));
    model->setHorizontalHeaderItem(8, new QStandardItem(QString("班主班联系电话")));
    model->setHorizontalHeaderItem(9, new QStandardItem(QString("查看学生")));

    Node *head = getFirst(class_list);
    while (NULL != head) {
        model->appendRow(MainWindow::readClassData(head));
        head = head->next;
    }
    ui->tableView->setModel(model);
    ui->tableView->resizeColumnsToContents();
    setButtons(model->rowCount(), 9, QString("查看学生"));
}

QList<QStandardItem*> MainWindow::readClassData(Node *classNode){
    QList<QStandardItem *> result = QList<QStandardItem *>();
    Class *data = (Class *)classNode->data;
    result.append(new QStandardItem(QString::fromUtf8(data->id)));
    result.append(new QStandardItem(QString::fromUtf8(data->name)));
    result.append(new QStandardItem(QString::number(data->num)));
    result.append(new QStandardItem(QString::number(data->age)));
    result.append(new QStandardItem(QString::number(data->gra_num)));
    result.append(new QStandardItem(QString::fromUtf8(data->mon_name)));
    result.append(new QStandardItem(QString::fromUtf8(data->phone)));
    result.append(new QStandardItem(QString::fromUtf8(data->tea_name)));
    result.append(new QStandardItem(QString::fromUtf8(data->tea_phone)));
    result.append(new QStandardItem(QString("Button")));
    return result;
} 

void MainWindow::showStudents(List* student_list){
    currentState = STUDENT;
    studentList = student_list;
    delete model;
    model = new QStandardItemModel(this);
    connect(model, SIGNAL(dataChanged(QModelIndex,QModelIndex,QVector<int>)), this, SLOT(onDataChanged(QModelIndex,QModelIndex,QVector<int>)));
    model->setHorizontalHeaderItem(0, new QStandardItem(QString("学号")));
    model->setHorizontalHeaderItem(1, new QStandardItem(QString("姓名")));
    model->setHorizontalHeaderItem(2, new QStandardItem(QString("性别")));
    model->setHorizontalHeaderItem(3, new QStandardItem(QString("籍贯")));
    model->setHorizontalHeaderItem(4, new QStandardItem(QString("出生日期")));
    model->setHorizontalHeaderItem(5, new QStandardItem(QString("年龄")));
    model->setHorizontalHeaderItem(6, new QStandardItem(QString("联系电话")));
    model->setHorizontalHeaderItem(7, new QStandardItem(QString("入学分数")));
    model->setHorizontalHeaderItem(8, new QStandardItem(QString("毕业与否")));
    model->setHorizontalHeaderItem(9, new QStandardItem(QString("毕业去向")));
    Node *head = getFirst(student_list);
    while (NULL != head) {
        model->appendRow(MainWindow::readStudentData(head));
        head = head->next;
    }
    ui->tableView->setModel(model);
    ui->tableView->resizeColumnsToContents();
}

QList<QStandardItem*> MainWindow::readStudentData(Node *studentNode){
    QList<QStandardItem *> result = QList<QStandardItem *>();
    Student *data = (Student*)studentNode->data;
    result.append(new QStandardItem(QString::fromUtf8(data->id)));
    result.append(new QStandardItem(QString::fromUtf8(data->name)));
    if(data->gender[0] == '1'){
        result.append(new QStandardItem(QString("男")));
    } else {
        result.append(new QStandardItem(QString("女")));
    }
    result.append(new QStandardItem(QString::fromUtf8(data->hometown)));
    result.append(new QStandardItem(QString::fromUtf8(data->birth)));
    result.append(new QStandardItem(QString::number(data->age)));
    result.append(new QStandardItem(QString::fromUtf8(data->phone)));
    result.append(new QStandardItem(QString::number(data->score)));
    result.append(new QStandardItem(data->grad ? QString("是") : QString("否")));
    result.append(new QStandardItem(QString::fromUtf8(data->where)));
    return result;
}

void MainWindow::setButtons(int num, int pos, const QString &text){
    for(int i = 0; i < num; i++){
        QVPushButton *button = new QVPushButton(text, i);
        ui->tableView->setIndexWidget(model->index(i, pos), button);
        connect(button, SIGNAL(v_clicked(int)), this, SLOT(onReceiveButton(int)));
    }
}

void MainWindow::onReceiveButton(int position){
    if(currentState == GRADE){
        Grade* grade = (Grade*) (getData(gradeList, position));
        List* class_list = grade->classes;
        showClasses(class_list);
    } else if (currentState == CLASS_){
        Class *class_ = (Class*) (getData(classList, position));
        List *student_list = class_->students;
        showStudents(student_list);
    }
}

void MainWindow::onBack(){
    switch (currentState) {
    case CLASS_:
        showGrades(gradeList);
        break;
    case STUDENT:
        showClasses(classList);
        break;
    default:
        break;
    }
}

void MainWindow::onForward(){
    switch (currentState) {
    case GRADE:
        if(NULL != classList) {
            showClasses(classList);
        }
        break;
    case CLASS_:
        if(NULL != studentList){
            showStudents(studentList);
        }
        break;
    default:
        break;
    }
}

void MainWindow::onDataChanged(QModelIndex index1, QModelIndex index2, QVector<int> vector){
    int row = index1.row();
    int col = index1.column();
    QVariant data = ui->tableView->model()->data(index1);
    switch (currentState) {
    case GRADE:
    {
        Grade* grade = getGrade(gradeList, row);
        switch (col) {
        case 0:
            strncpy(grade->id, data.toString().toUtf8().data(), 5);
            break;
        case 1:
            strncpy(grade->time, data.toString().toUtf8().data(),9);
            break;
        case 2:
            grade->num = data.toInt();
            break;
        case 3:
            grade->gra_num = data.toInt();
            break;
        case 4:
            strncpy(grade->coun_name, data.toString().toUtf8().data(), NAME_SIZE);
            break;
        case 5:
            strncpy(grade->coun_phone, data.toString().toUtf8().data(), 12);
            break;
        case 6:
            strncpy(grade->chairman, data.toString().toUtf8().data(), NAME_SIZE);
            break;
        }
        break;
    }
    case CLASS_:
    {
        Class* clas = getClass(classList, row);
        switch (col) {
        case 0:
            strncpy(clas->id, data.toString().toUtf8().data(), 15);
            break;
        case 1:
            strncpy(clas->name, data.toString().toUtf8().data(), NAME_SIZE);
            break;
        case 2:
            clas->num = data.toInt();
            break;
        case 3:
            clas->age = data.toFloat();
            break;
        case 4:
            clas->gra_num = data.toInt();
            break;
        case 5:
            strncpy(clas->mon_name, data.toString().toUtf8().data(), NAME_SIZE);
            break;
        case 6:
            strncpy(clas->phone, data.toString().toUtf8().data(), 12);
            break;
        case 7:
            strncpy(clas->tea_name, data.toString().toUtf8().data(), NAME_SIZE);
            break;
        case 8:
            strncpy(clas->tea_phone, data.toString().toUtf8().data(), 12);
            break;
        }
        break;
    }
    case STUDENT:
        Student* student = getStudent(studentList, row);
        switch (col) {
        case 0:
            strncpy(student->id, data.toString().toUtf8().data(), 12);
            break;
        case 1:
            strncpy(student->name, data.toString().toUtf8().data(), NAME_SIZE);
            break;
        case 2:
            if(data.toString() == "男"){
                strcpy(student->gender, "1");
            }
            if(data.toString() == "女"){
                strcpy(student->gender, "0");
            }
            break;
        case 3:
            strncpy(student->hometown, data.toString().toUtf8().data(), NAME_SIZE);
            break;
        case 4:
            strncpy(student->birth, data.toString().toUtf8().data(), 9);
            break;
        case 5:
            student->age = data.toInt();
            break;
        case 6:
            strncpy(student->phone, data.toString().toUtf8().data(),12);
            break;
        case 7:
            student->score = data.toFloat();
            break;
        case 8:
            if(data.toString() == "是"){
                student->grad = true;
            }
            if(data.toString() == "否"){
                student->grad = false;
            }
            break;
        case 9:
            strncpy(student->where, data.toString().toUtf8().data(), NAME_SIZE);
            break;
        default:
            break;
        }
        break;
    }

}


