#ifndef QVPUSHBUTTON_H
#define QVPUSHBUTTON_H

#include <QObject>
#include <QWidget>
#include <QPushButton>
#include <QDebug>

class QVPushButton : public QPushButton
{
    Q_OBJECT

public:
    QVPushButton(const QString &text, int position);
private:
    int position;
public slots:
    void self_clicked();
signals:
    void v_clicked(int position);

};

#endif // QVPUSHBUTTON_H
