#include "signup.h"
#include "ui_signup.h"
#include"mainwindow.h"
#include"Logic/Library.h"
#include"QMessageBox"
#include<iostream>
using namespace std;

SignUp::SignUp(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SignUp)
{
    ui->setupUi(this);
}

SignUp::~SignUp()
{
    delete ui;
}

void SignUp::on_SignUp_2_pressed()
{
    QString username = ui->UserName->text();
    QString email = ui->Email->text();
    QString password = ui->Password->text();
    QString re_password = ui->re_Password->text();
    if(username.toStdString()!=""&&email.toStdString()!=""&&password.toStdString()!=""&&password==re_password){
        long id = library->add_librarian(username.toStdString(),password.toStdString());
        QString str = "Use this id to sign in  ";
        str+=QString::number(id);
        QMessageBox messageBox;
        messageBox.information(0,"ID",str);
        messageBox.setFixedSize(500,200);
        messageBox.show();
        this->hide();
        MainWindow * w = new MainWindow();
        w->show();
    }
    else{
        QMessageBox messageBox;
        messageBox.critical(0,"Error","Please Enter Correct input!");
        messageBox.setFixedSize(500,200);
        messageBox.show();
    }
}

void SignUp::on_Back_pressed()
{
    this->hide();
    MainWindow * w = new MainWindow();
    w->show();
}
