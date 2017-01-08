#include "removemember.h"
#include "ui_removemember.h"

RemoveMember::RemoveMember(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RemoveMember)
{
    ui->setupUi(this);
}

RemoveMember::~RemoveMember()
{
    delete ui;
}
