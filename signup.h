#ifndef SIGNUP_H
#define SIGNUP_H

#include <QWidget>
#include"Logic/Library.h"

extern Library* library;
namespace Ui {
class SignUp;
}

class SignUp : public QWidget
{
    Q_OBJECT

public:
    explicit SignUp(QWidget *parent = 0);
    ~SignUp();

private slots:
    void on_SignUp_2_pressed();

    void on_Back_pressed();

private:
    Ui::SignUp *ui;
};

#endif // SIGNUP_H
