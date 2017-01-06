#ifndef USERUI_H
#define USERUI_H

#include <QWidget>

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
