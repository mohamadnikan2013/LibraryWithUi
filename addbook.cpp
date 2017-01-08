#include "addbook.h"
#include "ui_addbook.h"
#include"librarianui.h"
#include"QMessageBox"
#include<iostream>
using namespace std;

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

void AddBook::on_add_clicked()
{
    string name = ui->name->text().toStdString();
    string des = ui->des->accessibleDescription().toStdString();
    long id = ui->writerid->text().toInt();
    long ret_id = 0;
    if(ui->Novel->isChecked()){
        ret_id = library->add_book(name,id ,"nov",des);
    }else if(ui->Science->isChecked())
    {
     ret_id = library->add_book(name,id ,"sci",des);
    }else if(ui->research->isChecked())
    {
        ret_id = library->add_book(name,id ,"res",des);
    }else if(ui->Art->isChecked()){
        ret_id = library->add_book(name,id ,"art");
    }
    this->hide();
    QString str = "the Member Id is   ";
    str+=QString::number(ret_id);
    QMessageBox messageBox;
    messageBox.information(0,"ID",str);
    messageBox.setFixedSize(500,200);
    messageBox.show();
    LibrarianUi *l = new LibrarianUi;
    l->show();
}
