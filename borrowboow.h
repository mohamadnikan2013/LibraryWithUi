#ifndef BORROWBOOW_H
#define BORROWBOOW_H

#include <QWidget>
#include"Logic/Library.h"
#include<iostream>

using namespace std;

extern Library* library;

namespace Ui {
class BorrowBoow;
}

class BorrowBoow : public QWidget
{
    Q_OBJECT

public:
    explicit BorrowBoow(QWidget *parent = 0);
    ~BorrowBoow();

private slots:
    void on_Borrow_clicked();

private:
    Ui::BorrowBoow *ui;
};

#endif // BORROWBOOW_H
