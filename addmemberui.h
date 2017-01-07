#ifndef ADDMEMBERUI_H
#define ADDMEMBERUI_H

#include <QWidget>
#include"Logic/Library.h"

extern Library* library;
namespace Ui {
class AddMemberUi;
}

class AddMemberUi : public QWidget
{
    Q_OBJECT

public:
    explicit AddMemberUi(QWidget *parent = 0);
    ~AddMemberUi();

private slots:
    void on_pushButton_pressed();

private:
    Ui::AddMemberUi *ui;
};

#endif // ADDMEMBERUI_H
