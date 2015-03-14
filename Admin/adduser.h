#ifndef ADDUSER_H
#define ADDUSER_H

#include <QDialog>
#include <QtCore>
//#include "mainwindow.h"

namespace Ui {
class adduser;
}

class adduser : public QDialog
{
    Q_OBJECT

public:
    explicit adduser(QWidget *parent = 0);
    ~adduser();

public slots:
    void on_saveButton_clicked();

private:
    Ui::adduser *ui;
    //QString AD_name;
    //QString AD_account;
};

#endif // ADDUSER_H
