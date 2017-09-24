/********************************************************************************
** Form generated from reading UI file 'statisticwhere.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATISTICWHERE_H
#define UI_STATISTICWHERE_H

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

class Ui_StatisticWhereWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QTextEdit *textEdit;
    QTextEdit *textEdit_2;
    QLabel *label_2;
    QTextEdit *textEdit_3;
    QPushButton *pushButton;
    QTableView *tableView;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *StatisticWhereWindow)
    {
        if (StatisticWhereWindow->objectName().isEmpty())
            StatisticWhereWindow->setObjectName(QStringLiteral("StatisticWhereWindow"));
        StatisticWhereWindow->resize(800, 600);
        centralwidget = new QWidget(StatisticWhereWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetNoConstraint);
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMaximumSize(QSize(16777215, 40));
        QFont font;
        font.setPointSize(18);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(textEdit->sizePolicy().hasHeightForWidth());
        textEdit->setSizePolicy(sizePolicy1);
        textEdit->setMaximumSize(QSize(16777215, 40));

        horizontalLayout->addWidget(textEdit);

        textEdit_2 = new QTextEdit(centralwidget);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));
        sizePolicy1.setHeightForWidth(textEdit_2->sizePolicy().hasHeightForWidth());
        textEdit_2->setSizePolicy(sizePolicy1);
        textEdit_2->setMaximumSize(QSize(16777215, 40));

        horizontalLayout->addWidget(textEdit_2);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy2);
        label_2->setMaximumSize(QSize(16777215, 40));
        label_2->setFont(font);

        horizontalLayout->addWidget(label_2);

        textEdit_3 = new QTextEdit(centralwidget);
        textEdit_3->setObjectName(QStringLiteral("textEdit_3"));
        sizePolicy1.setHeightForWidth(textEdit_3->sizePolicy().hasHeightForWidth());
        textEdit_3->setSizePolicy(sizePolicy1);
        textEdit_3->setMaximumSize(QSize(16777215, 40));

        horizontalLayout->addWidget(textEdit_3);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);


        verticalLayout_2->addLayout(horizontalLayout);

        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QStringLiteral("tableView"));

        verticalLayout_2->addWidget(tableView);

        StatisticWhereWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(StatisticWhereWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 24));
        StatisticWhereWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(StatisticWhereWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        StatisticWhereWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(StatisticWhereWindow);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        StatisticWhereWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        retranslateUi(StatisticWhereWindow);

        QMetaObject::connectSlotsByName(StatisticWhereWindow);
    } // setupUi

    void retranslateUi(QMainWindow *StatisticWhereWindow)
    {
        StatisticWhereWindow->setWindowTitle(QApplication::translate("StatisticWhereWindow", "MainWindow", Q_NULLPTR));
        label->setText(QApplication::translate("StatisticWhereWindow", "\346\227\266\351\227\264\346\234\237\351\231\220", Q_NULLPTR));
        label_2->setText(QApplication::translate("StatisticWhereWindow", "\344\274\201\344\270\232\345\220\215\347\247\260", Q_NULLPTR));
        pushButton->setText(QApplication::translate("StatisticWhereWindow", "\346\237\245\350\257\242", Q_NULLPTR));
        toolBar->setWindowTitle(QApplication::translate("StatisticWhereWindow", "toolBar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class StatisticWhereWindow: public Ui_StatisticWhereWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATISTICWHERE_H
