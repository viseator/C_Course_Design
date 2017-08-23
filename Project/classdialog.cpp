#include "classdialog.h"


ClassDialog::ClassDialog(QWidget *parent):QDialog(parent){
    setupUi(this);
    connect(this, SIGNAL(accepted()), SLOT(self_slot()));
}

void ClassDialog::self_slot(){
    emit accept(textEdit->toPlainText(),textEdit_2->toPlainText(), textEdit_3->toPlainText(), textEdit_6->toPlainText(), textEdit_7->toPlainText());
}
