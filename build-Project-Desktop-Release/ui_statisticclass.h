/********************************************************************************
** Form generated from reading UI file 'statisticclass.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATISTICCLASS_H
#define UI_STATISTICCLASS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StatisticClassWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QTextEdit *textEdit;
    QTextEdit *textEdit_2;
    QPushButton *pushButton;
    QTableView *tableView;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *StatisticClassWindow)
    {
        if (StatisticClassWindow->objectName().isEmpty())
            StatisticClassWindow->setObjectName(QStringLiteral("StatisticClassWindow"));
        StatisticClassWindow->resize(800, 600);
        centralwidget = new QWidget(StatisticClassWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(18);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(textEdit->sizePolicy().hasHeightForWidth());
        textEdit->setSizePolicy(sizePolicy);
        textEdit->setMaximumSize(QSize(16777215, 40));

        horizontalLayout->addWidget(textEdit);

        textEdit_2 = new QTextEdit(centralwidget);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));
        sizePolicy.setHeightForWidth(textEdit_2->sizePolicy().hasHeightForWidth());
        textEdit_2->setSizePolicy(sizePolicy);
        textEdit_2->setMaximumSize(QSize(16777215, 40));

        horizontalLayout->addWidget(textEdit_2);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);


        verticalLayout_2->addLayout(horizontalLayout);

        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QStringLiteral("tableView"));

        verticalLayout_2->addWidget(tableView);

        StatisticClassWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(StatisticClassWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 24));
        StatisticClassWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(StatisticClassWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        StatisticClassWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(StatisticClassWindow);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        StatisticClassWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        retranslateUi(StatisticClassWindow);

        QMetaObject::connectSlotsByName(StatisticClassWindow);
    } // setupUi

    void retranslateUi(QMainWindow *StatisticClassWindow)
    {
        StatisticClassWindow->setWindowTitle(QApplication::translate("StatisticClassWindow", "MainWindow", Q_NULLPTR));
        label->setText(QApplication::translate("StatisticClassWindow", "\346\227\266\351\227\264\346\234\237\351\231\220", Q_NULLPTR));
        pushButton->setText(QApplication::translate("StatisticClassWindow", "\346\237\245\350\257\242", Q_NULLPTR));
        toolBar->setWindowTitle(QApplication::translate("StatisticClassWindow", "toolBar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class StatisticClassWindow: public Ui_StatisticClassWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATISTICCLASS_H
