#include "borrowboow.h"
#include "ui_borrowboow.h"
#include"QMessageBox"
#include"mainwindow.h"
BorrowBoow::BorrowBoow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BorrowBoow)
{
    ui->setupUi(this);
}

BorrowBoow::~BorrowBoow()
{
    delete ui;
}

void BorrowBoow::on_Borrow_clicked()
{
    long user = ui->userid->text().toInt();
    long book = ui->bookid->text().toInt();
    bool ok = library->borrow_book(book , user);
    this->hide();
    if(ok){
        QMessageBox messageBox;
        messageBox.information(0,"Ok","OK");
        messageBox.setFixedSize(500,200);
        messageBox.show();

    }
    else{
    QMessageBox messageBox;
    messageBox.critical(0,"Wrong","something go wrong the prosses failed");
    messageBox.setFixedSize(500,200);
    messageBox.show();
    }
    MainWindow * w = new MainWindow();
    w->show();
}
