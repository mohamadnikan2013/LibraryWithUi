#include "returnbook.h"
#include "ui_returnbook.h"
#include"QMessageBox"
#include"mainwindow.h"
#include"Logic/Library.h"
#include<iostream>

using namespace std;

extern Library* library;
ReturnBook::ReturnBook(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ReturnBook)
{
    ui->setupUi(this);
}

ReturnBook::~ReturnBook()
{
    delete ui;
}

void ReturnBook::on_pushButton_clicked()
{
    long id = ui->bookId->text().toInt();
    library->return_book(id);
    this->hide();
    QMessageBox messageBox;
    messageBox.information(0,"Ok","OK");
    messageBox.setFixedSize(500,200);
    messageBox.show();
    MainWindow * w = new MainWindow();
    w->show();
}
