#include "login.h"
#include "ui_login.h"
#include "mainwindow.h"

Login::Login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
    this->setWindowTitle("Login");
}

Login::~Login()
{
    delete ui;
}

void Login::on_pushButton_clicked()
{
    //MainWindow adminWindow;
    //adminWindow.setModal(ture);
    //adminWindow.exec();
    mainWin = new MainWindow(this);
    mainWin->show();
}
