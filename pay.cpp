#include "pay.h"
#include "ui_pay.h"
#include"QMessageBox"
#include"mainwindow.h"
#include"Logic/Library.h"
#include"librarianui.h"
#include<iostream>

using namespace std;

extern Library* library;
Pay::Pay(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Pay)
{
    ui->setupUi(this);
}

Pay::~Pay()
{
    delete ui;
}

void Pay::on_pushButton_2_clicked()
{
    long id = ui->Id->text().toInt();
    double pay = library->Pay(id);
    this->hide();
    QMessageBox messageBox;
    QString str=  "He/She has to pay  ";
    str+=QString::number(pay);
    messageBox.information(0,"Ok",str);
    messageBox.setFixedSize(500,200);
    messageBox.show();
    LibrarianUi *l = new LibrarianUi;
    l->show();
}
