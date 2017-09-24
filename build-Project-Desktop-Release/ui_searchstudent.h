/********************************************************************************
** Form generated from reading UI file 'searchstudent.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHSTUDENT_H
#define UI_SEARCHSTUDENT_H

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

class Ui_StudentDialog
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_3;
    QLabel *label;
    QTextEdit *textEdit_3;
    QLabel *label_2;
    QTextEdit *textEdit;
    QTextEdit *textEdit_5;
    QTextEdit *textEdit_2;
    QLabel *label_6;
    QTextEdit *textEdit_4;
    QTextEdit *textEdit_6;
    QTextEdit *textEdit_7;
    QTextEdit *textEdit_8;

    void setupUi(QDialog *StudentDialog)
    {
        if (StudentDialog->objectName().isEmpty())
            StudentDialog->setObjectName(QStringLiteral("StudentDialog"));
        StudentDialog->resize(362, 535);
        buttonBox = new QDialogButtonBox(StudentDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(10, 490, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        layoutWidget = new QWidget(StudentDialog);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(50, 30, 274, 452));
        QFont font;
        font.setPointSize(17);
        layoutWidget->setFont(font);
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(6);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 4, 0, 1, 1);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 5, 0, 1, 1);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        textEdit_3 = new QTextEdit(layoutWidget);
        textEdit_3->setObjectName(QStringLiteral("textEdit_3"));

        gridLayout->addWidget(textEdit_3, 3, 1, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        textEdit = new QTextEdit(layoutWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(textEdit->sizePolicy().hasHeightForWidth());
        textEdit->setSizePolicy(sizePolicy);

        gridLayout->addWidget(textEdit, 1, 1, 1, 2);

        textEdit_5 = new QTextEdit(layoutWidget);
        textEdit_5->setObjectName(QStringLiteral("textEdit_5"));

        gridLayout->addWidget(textEdit_5, 3, 2, 1, 1);

        textEdit_2 = new QTextEdit(layoutWidget);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));

        gridLayout->addWidget(textEdit_2, 2, 1, 1, 2);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 6, 0, 1, 1);

        textEdit_4 = new QTextEdit(layoutWidget);
        textEdit_4->setObjectName(QStringLiteral("textEdit_4"));

        gridLayout->addWidget(textEdit_4, 4, 1, 1, 1);

        textEdit_6 = new QTextEdit(layoutWidget);
        textEdit_6->setObjectName(QStringLiteral("textEdit_6"));

        gridLayout->addWidget(textEdit_6, 4, 2, 1, 1);

        textEdit_7 = new QTextEdit(layoutWidget);
        textEdit_7->setObjectName(QStringLiteral("textEdit_7"));

        gridLayout->addWidget(textEdit_7, 5, 1, 1, 2);

        textEdit_8 = new QTextEdit(layoutWidget);
        textEdit_8->setObjectName(QStringLiteral("textEdit_8"));

        gridLayout->addWidget(textEdit_8, 6, 1, 1, 2);


        retranslateUi(StudentDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), StudentDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), StudentDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(StudentDialog);
    } // setupUi

    void retranslateUi(QDialog *StudentDialog)
    {
        StudentDialog->setWindowTitle(QApplication::translate("StudentDialog", "\346\237\245\346\211\276\345\271\264\347\272\247", Q_NULLPTR));
        label_4->setText(QApplication::translate("StudentDialog", "\345\271\264\351\276\204", Q_NULLPTR));
        label_5->setText(QApplication::translate("StudentDialog", "\346\257\225\344\270\232\344\270\216\345\220\246", Q_NULLPTR));
        label_3->setText(QApplication::translate("StudentDialog", "\345\205\245\345\255\246\346\227\266\351\227\264", Q_NULLPTR));
        label->setText(QApplication::translate("StudentDialog", "\345\247\223\345\220\215", Q_NULLPTR));
        label_2->setText(QApplication::translate("StudentDialog", "\344\270\223\344\270\232", Q_NULLPTR));
        label_6->setText(QApplication::translate("StudentDialog", "\346\257\225\344\270\232\345\216\273\345\220\221", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class StudentDialog: public Ui_StudentDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHSTUDENT_H
