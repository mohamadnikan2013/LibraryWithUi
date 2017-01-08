#include "removebook.h"
#include "ui_removebook.h"

RemoveBook::RemoveBook(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RemoveBook)
{
    ui->setupUi(this);
}

RemoveBook::~RemoveBook()
{
    delete ui;
}
