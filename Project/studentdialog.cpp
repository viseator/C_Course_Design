#include "studentdialog.h"

StudentDialog::StudentDialog(QWidget *parent): QDialog(parent)
{
    setupUi(this);
    connect(this, SIGNAL(accepted()), SLOT(self_slot()));
}

void StudentDialog::self_slot(){
    emit accept(textEdit->toPlainText(), textEdit_2->toPlainText(), textEdit_3->toPlainText(), textEdit_4->toPlainText(), textEdit_5->toPlainText(), textEdit_6->toPlainText(), textEdit_7->toPlainText(), textEdit_8->toPlainText());
}
