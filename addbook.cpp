#include "addbook.h"
#include "ui_addbook.h"
#include"librarianui.h"
#include"QMessageBox"
AddBook::AddBook(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AddBook)
{
    ui->setupUi(this);
}

AddBook::~AddBook()
{
    delete ui;
}
