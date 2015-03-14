#include "history.h"
#include "ui_history.h"
#include "mainwindow.h"
#include <QDebug>

History::History(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::History)
{
    ui->setupUi(this);
    this->setWindowTitle("History");
}

History::~History()
{
    delete ui;
}
