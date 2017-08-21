#include "qvpushbutton.h"

QVPushButton::QVPushButton(const QString &text, int position)
    :QPushButton(text), position(position){
    connect(this, SIGNAL(clicked(bool)), SLOT(self_clicked()));
}

void QVPushButton::self_clicked(){
    qDebug() << position;
    emit v_clicked(position);
}
