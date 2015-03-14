#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "adduser.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Admin");
    a = NULL;
    blac = NULL;
    hist = NULL;
    //connect(ui->blacklistButton,SIGNAL(clicked()),this,SLOT(on_blacklistButton_clicked()));


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_userButton_clicked()
{
    a = new adduser(this);
    a->show();
}

void MainWindow::on_blacklistButton_clicked()
{
    blac = new blacklist(this); //Bug
    blac->show();
}

void MainWindow::on_historyButton_clicked()
{
    hist = new History(this);  //Bug
    hist->show();
}


