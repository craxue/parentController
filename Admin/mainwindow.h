#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "adduser.h"
#include "history.h"
#include "blacklist.h"
#include <QtCore>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_userButton_clicked();

    void on_blacklistButton_clicked();

    void on_historyButton_clicked();


private:
    Ui::MainWindow *ui;
    History *hist;
    blacklist *blac;
    //adduser *addu;
    adduser *a;


};

#endif // MAINWINDOW_H
