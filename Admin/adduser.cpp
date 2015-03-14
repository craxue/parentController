#include "adduser.h"
#include "ui_adduser.h"
#include "mainwindow.h"



adduser::adduser(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::adduser)
{
    ui->setupUi(this);
    this->setWindowTitle("Add new user");
    //AD_name = ui->nameline->text();
    //AD_account = ui->accountline->text();

}

adduser::~adduser()
{
    delete ui;
}


void adduser::on_saveButton_clicked()
{

}
