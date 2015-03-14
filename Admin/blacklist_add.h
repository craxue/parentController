#ifndef BLACKLIST_ADD_H
#define BLACKLIST_ADD_H

#include <QDialog>

namespace Ui {
class Blacklist_add;
}

class Blacklist_add : public QDialog
{
    Q_OBJECT

public:
    explicit Blacklist_add(QWidget *parent = 0);
    ~Blacklist_add();

private:
    Ui::Blacklist_add *ui;
};

#endif // BLACKLIST_ADD_H
