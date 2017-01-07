#ifndef USERUI_H
#define USERUI_H

#include <QWidget>
#include"Logic/Library.h"
extern Library* library;
namespace Ui {
class UserUi;
}

class UserUi : public QWidget
{
    Q_OBJECT

public:
    explicit UserUi(QWidget *parent = 0);
    ~UserUi();

private:
    Ui::UserUi *ui;
};

#endif // USERUI_H
