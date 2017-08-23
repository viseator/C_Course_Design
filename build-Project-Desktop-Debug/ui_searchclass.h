/********************************************************************************
** Form generated from reading UI file 'searchclass.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHCLASS_H
#define UI_SEARCHCLASS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ClassDialog
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_4;
    QTextEdit *textEdit_6;
    QTextEdit *textEdit_7;
    QTextEdit *textEdit;
    QTextEdit *textEdit_2;
    QTextEdit *textEdit_3;

    void setupUi(QDialog *ClassDialog)
    {
        if (ClassDialog->objectName().isEmpty())
            ClassDialog->setObjectName(QStringLiteral("ClassDialog"));
        ClassDialog->resize(459, 366);
        buttonBox = new QDialogButtonBox(ClassDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(110, 330, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        layoutWidget = new QWidget(ClassDialog);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 30, 271, 300));
        QFont font;
        font.setPointSize(17);
        layoutWidget->setFont(font);
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(6);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 4, 0, 1, 1);

        textEdit_6 = new QTextEdit(layoutWidget);
        textEdit_6->setObjectName(QStringLiteral("textEdit_6"));

        gridLayout->addWidget(textEdit_6, 4, 1, 1, 1);

        textEdit_7 = new QTextEdit(layoutWidget);
        textEdit_7->setObjectName(QStringLiteral("textEdit_7"));

        gridLayout->addWidget(textEdit_7, 4, 2, 1, 1);

        textEdit = new QTextEdit(layoutWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(textEdit->sizePolicy().hasHeightForWidth());
        textEdit->setSizePolicy(sizePolicy);

        gridLayout->addWidget(textEdit, 1, 1, 1, 2);

        textEdit_2 = new QTextEdit(layoutWidget);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));

        gridLayout->addWidget(textEdit_2, 2, 1, 1, 2);

        textEdit_3 = new QTextEdit(layoutWidget);
        textEdit_3->setObjectName(QStringLiteral("textEdit_3"));

        gridLayout->addWidget(textEdit_3, 3, 1, 1, 2);


        retranslateUi(ClassDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ClassDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ClassDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ClassDialog);
    } // setupUi

    void retranslateUi(QDialog *ClassDialog)
    {
        ClassDialog->setWindowTitle(QApplication::translate("ClassDialog", "Dialog", Q_NULLPTR));
        label_2->setText(QApplication::translate("ClassDialog", "\344\270\223\344\270\232", Q_NULLPTR));
        label->setText(QApplication::translate("ClassDialog", "\347\217\255\347\272\247\347\274\226\345\217\267", Q_NULLPTR));
        label_3->setText(QApplication::translate("ClassDialog", "\347\217\255\344\270\273\344\273\273\345\247\223\345\220\215", Q_NULLPTR));
        label_4->setText(QApplication::translate("ClassDialog", "\344\272\272\346\225\260", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ClassDialog: public Ui_ClassDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHCLASS_H
