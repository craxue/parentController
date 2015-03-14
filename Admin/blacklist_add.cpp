#include "blacklist_add.h"
#include "ui_blacklist_add.h"

Blacklist_add::Blacklist_add(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Blacklist_add)
{
    ui->setupUi(this);
    this->setWindowTitle("Add new website");
}

Blacklist_add::~Blacklist_add()
{
    delete ui;
}
