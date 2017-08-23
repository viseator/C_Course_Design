#include "gradedialog.h"

GradeDialog::GradeDialog(QWidget *parent):QDialog(parent){
    setupUi(this);
    connect(this, SIGNAL(accepted()), SLOT(self_slot()));
}

void GradeDialog::self_slot(){
    emit accept(textEdit->toPlainText(),textEdit_2->toPlainText(), textEdit_3->toPlainText(), textEdit_4->toPlainText(), textEdit_5->toPlainText());
}
