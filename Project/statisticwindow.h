#ifndef STATISTICWINDOW_H
#define STATISTICWINDOW_H

#include <QMainWindow>
#include <QObject>
#include <QWidget>
#include "ui_statisticgrade.h"

namespace Ui {
class StatisticWindow;
}

class StatisticWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit StatisticWindow(QWidget *parent = 0);
private:
    Ui::StatisticWindow *ui;
};

#endif // STATISTICWINDOW_H
