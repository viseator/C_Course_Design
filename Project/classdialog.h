#ifndef CLASSDIALOG_H
#define CLASSDIALOG_H

#include <QObject>
#include <QWidget>
#include "ui_searchclass.h"

class ClassDialog : public QDialog, public Ui::ClassDialog
{
    Q_OBJECT
public:
    ClassDialog(QWidget *parent = 0);
public slots:
    void self_slot();
signals:
    void accept(QString, QString, QString, QString, QString);
};

#endif // CLASSDIALOG_H
