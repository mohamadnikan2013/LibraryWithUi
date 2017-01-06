#include "userui.h"
#include "ui_userui.h"

UserUi::UserUi(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::UserUi)
{
    ui->setupUi(this);
}

UserUi::~UserUi()
{
    delete ui;
}
