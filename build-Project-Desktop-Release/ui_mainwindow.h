/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *backAction;
    QAction *forwradAction;
    QAction *deleteAction;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QTableView *tableView;
    QMenuBar *menuBar;
    QMenu *fileMenu;
    QMenu *inputMenu;
    QMenu *searchMenu;
    QMenu *statisticMenu;
    QMenu *sortMenu;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1047, 598);
        backAction = new QAction(MainWindow);
        backAction->setObjectName(QStringLiteral("backAction"));
        backAction->setCheckable(true);
        forwradAction = new QAction(MainWindow);
        forwradAction->setObjectName(QStringLiteral("forwradAction"));
        forwradAction->setCheckable(true);
        deleteAction = new QAction(MainWindow);
        deleteAction->setObjectName(QStringLiteral("deleteAction"));
        deleteAction->setCheckable(true);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tableView = new QTableView(centralWidget);
        tableView->setObjectName(QStringLiteral("tableView"));

        gridLayout->addWidget(tableView, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1047, 24));
        fileMenu = new QMenu(menuBar);
        fileMenu->setObjectName(QStringLiteral("fileMenu"));
        inputMenu = new QMenu(menuBar);
        inputMenu->setObjectName(QStringLiteral("inputMenu"));
        searchMenu = new QMenu(menuBar);
        searchMenu->setObjectName(QStringLiteral("searchMenu"));
        statisticMenu = new QMenu(menuBar);
        statisticMenu->setObjectName(QStringLiteral("statisticMenu"));
        sortMenu = new QMenu(menuBar);
        sortMenu->setObjectName(QStringLiteral("sortMenu"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(fileMenu->menuAction());
        menuBar->addAction(inputMenu->menuAction());
        menuBar->addAction(searchMenu->menuAction());
        menuBar->addAction(statisticMenu->menuAction());
        menuBar->addAction(sortMenu->menuAction());
        mainToolBar->addAction(backAction);
        mainToolBar->addAction(forwradAction);
        mainToolBar->addAction(deleteAction);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\345\255\246\347\224\237\344\277\241\346\201\257\347\256\241\347\220\206\347\263\273\347\273\237", Q_NULLPTR));
        backAction->setText(QApplication::translate("MainWindow", "\345\220\216\351\200\200", Q_NULLPTR));
        forwradAction->setText(QApplication::translate("MainWindow", "\345\211\215\350\277\233", Q_NULLPTR));
        deleteAction->setText(QApplication::translate("MainWindow", "\345\210\240\351\231\244", Q_NULLPTR));
        fileMenu->setTitle(QApplication::translate("MainWindow", "\346\226\207\344\273\266", Q_NULLPTR));
        inputMenu->setTitle(QApplication::translate("MainWindow", "\346\267\273\345\212\240", Q_NULLPTR));
        searchMenu->setTitle(QApplication::translate("MainWindow", "\346\237\245\350\257\242", Q_NULLPTR));
        statisticMenu->setTitle(QApplication::translate("MainWindow", "\347\273\237\350\256\241", Q_NULLPTR));
        sortMenu->setTitle(QApplication::translate("MainWindow", "\346\216\222\345\272\217", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
