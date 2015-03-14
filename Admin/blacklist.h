#ifndef BLACKLIST_H
#define BLACKLIST_H

#include <QDialog>
#include <QtCore>
#include <QMainWindow>
#include "blacklist_add.h"

namespace Ui {
class blacklist;
}

class blacklist : public QDialog
{
    Q_OBJECT

public:
    explicit blacklist(QWidget *parent = 0);
    ~blacklist();

private slots:
    void on_addButton_clicked();

private:
    Ui::blacklist *ui;
    Blacklist_add *BL_add;
};

#endif // BLACKLIST_H
