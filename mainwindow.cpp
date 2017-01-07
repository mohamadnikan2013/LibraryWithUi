#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"signup.h"
#include"Logic/Library.h"
#include"QMessageBox"
#include"librarianui.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_SignUpButton_pressed()
{
    this -> hide( );
    SignUp *window2 = new SignUp( );
    window2 -> show( );
}

void MainWindow::on_SignInButton_pressed()
{
    QString username = ui->UserName->text();
    QString password = ui->Password->text();

    if(library->login(username.toInt() , password.toStdString())){
        this->hide();
        LibrarianUi * libui = new LibrarianUi;
        libui->show();

    }else{
        QMessageBox messageBox;
        messageBox.critical(0,"Error","Please Enter Correct input!");
        messageBox.setFixedSize(500,200);
        messageBox.show();
    }


}
