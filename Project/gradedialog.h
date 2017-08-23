#ifndef GRADEDIALOG_H
#define GRADEDIALOG_H

#include <QObject>
#include <QWidget>
#include <QDialog>
#include <ui_searchgrade.h>
#include <QTextEdit>
#include <QDebug>
class GradeDialog : public QDialog, public Ui::GradeDialog
{
    Q_OBJECT
public:
    GradeDialog(QWidget *parent = 0);
public slots:
    void self_slot();
signals:
    void accept(QString, QString, QString, QString, QString);
};

#endif // GRADEDIALOG_H
