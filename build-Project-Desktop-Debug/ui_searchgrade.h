/********************************************************************************
** Form generated from reading UI file 'searchgrade.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHGRADE_H
#define UI_SEARCHGRADE_H

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

class Ui_GradeDialog
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QTextEdit *textEdit_2;
    QLabel *label;
    QTextEdit *textEdit_3;
    QLabel *label_2;
    QTextEdit *textEdit_4;
    QTextEdit *textEdit_5;
    QTextEdit *textEdit;

    void setupUi(QDialog *GradeDialog)
    {
        if (GradeDialog->objectName().isEmpty())
            GradeDialog->setObjectName(QStringLiteral("GradeDialog"));
        GradeDialog->resize(411, 311);
        buttonBox = new QDialogButtonBox(GradeDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(60, 270, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        layoutWidget = new QWidget(GradeDialog);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(50, 30, 271, 224));
        QFont font;
        font.setPointSize(17);
        layoutWidget->setFont(font);
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(6);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        textEdit_2 = new QTextEdit(layoutWidget);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));

        gridLayout->addWidget(textEdit_2, 2, 1, 1, 1);

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

        textEdit_4 = new QTextEdit(layoutWidget);
        textEdit_4->setObjectName(QStringLiteral("textEdit_4"));

        gridLayout->addWidget(textEdit_4, 2, 2, 1, 1);

        textEdit_5 = new QTextEdit(layoutWidget);
        textEdit_5->setObjectName(QStringLiteral("textEdit_5"));

        gridLayout->addWidget(textEdit_5, 3, 2, 1, 1);

        textEdit = new QTextEdit(layoutWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(textEdit->sizePolicy().hasHeightForWidth());
        textEdit->setSizePolicy(sizePolicy);

        gridLayout->addWidget(textEdit, 1, 1, 1, 2);


        retranslateUi(GradeDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), GradeDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), GradeDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(GradeDialog);
    } // setupUi

    void retranslateUi(QDialog *GradeDialog)
    {
        GradeDialog->setWindowTitle(QApplication::translate("GradeDialog", "\346\237\245\346\211\276\345\271\264\347\272\247", Q_NULLPTR));
        label_3->setText(QApplication::translate("GradeDialog", "\345\205\245\345\255\246\344\272\272\346\225\260", Q_NULLPTR));
        label->setText(QApplication::translate("GradeDialog", "\345\271\264\347\272\247\347\274\226\345\217\267", Q_NULLPTR));
        label_2->setText(QApplication::translate("GradeDialog", "\345\205\245\345\255\246\346\227\266\351\227\264", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class GradeDialog: public Ui_GradeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHGRADE_H
