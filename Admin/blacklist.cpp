#include "blacklist.h"
#include "ui_blacklist.h"
#include "mainwindow.h"
#include <QDebug>


blacklist::blacklist(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::blacklist)
{
    ui->setupUi(this);
    this->setWindowTitle("Blacklist");
}

blacklist::~blacklist()
{
    delete ui;
}


void blacklist::on_addButton_clicked()
{
    BL_add = new Blacklist_add(this);
    BL_add->show();
}
