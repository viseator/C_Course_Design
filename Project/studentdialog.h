#ifndef STUDENTDIALOG_H
#define STUDENTDIALOG_H

#include <QObject>
#include <QWidget>
#include <QDialog>
#include <ui_searchstudent.h>
#include <QTextEdit>

class StudentDialog : public QDialog, public Ui_StudentDialog
{
    Q_OBJECT

public:
    StudentDialog(QWidget *parent = 0);
public slots:
    void self_slot();
signals:
    void accept(QString, QString, QString, QString, QString, QString, QString, QString);
};

#endif // STUDENTDIALOG_H
