/********************************************************************************
** Form generated from reading UI file 'statisticgrade.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATISTICGRADE_H
#define UI_STATISTICGRADE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
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

class Ui_StatisticWindow
{
public:
    QAction *SGradeSortAction;
    QAction *SNumSortAction;
    QAction *SUngraSortAction;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QTextEdit *textEdit;
    QTextEdit *textEdit_2;
    QPushButton *pushButton;
    QTableView *tableView;
    QLineEdit *lineEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *StatisticWindow)
    {
        if (StatisticWindow->objectName().isEmpty())
            StatisticWindow->setObjectName(QStringLiteral("StatisticWindow"));
        StatisticWindow->resize(800, 600);
        SGradeSortAction = new QAction(StatisticWindow);
        SGradeSortAction->setObjectName(QStringLiteral("SGradeSortAction"));
        SGradeSortAction->setCheckable(true);
        SNumSortAction = new QAction(StatisticWindow);
        SNumSortAction->setObjectName(QStringLiteral("SNumSortAction"));
        SNumSortAction->setCheckable(true);
        SUngraSortAction = new QAction(StatisticWindow);
        SUngraSortAction->setObjectName(QStringLiteral("SUngraSortAction"));
        SUngraSortAction->setCheckable(true);
        centralwidget = new QWidget(StatisticWindow);
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

        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        verticalLayout_2->addWidget(lineEdit);

        StatisticWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(StatisticWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 24));
        StatisticWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(StatisticWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        StatisticWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(StatisticWindow);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        StatisticWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(SGradeSortAction);
        toolBar->addAction(SNumSortAction);
        toolBar->addAction(SUngraSortAction);

        retranslateUi(StatisticWindow);

        QMetaObject::connectSlotsByName(StatisticWindow);
    } // setupUi

    void retranslateUi(QMainWindow *StatisticWindow)
    {
        StatisticWindow->setWindowTitle(QApplication::translate("StatisticWindow", "MainWindow", Q_NULLPTR));
        SGradeSortAction->setText(QApplication::translate("StatisticWindow", "\346\214\211\345\271\264\347\272\247\347\274\226\345\217\267\346\216\222\345\272\217", Q_NULLPTR));
        SNumSortAction->setText(QApplication::translate("StatisticWindow", "\346\214\211\345\205\245\345\255\246\344\272\272\346\225\260\346\216\222\345\272\217", Q_NULLPTR));
        SUngraSortAction->setText(QApplication::translate("StatisticWindow", "\346\214\211\346\234\252\346\257\225\344\270\232\344\272\272\346\225\260\346\216\222\345\272\217", Q_NULLPTR));
        label->setText(QApplication::translate("StatisticWindow", "\346\227\266\351\227\264\346\234\237\351\231\220", Q_NULLPTR));
        pushButton->setText(QApplication::translate("StatisticWindow", "\346\237\245\350\257\242", Q_NULLPTR));
        toolBar->setWindowTitle(QApplication::translate("StatisticWindow", "toolBar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class StatisticWindow: public Ui_StatisticWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATISTICGRADE_H
