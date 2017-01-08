#include "librarianui.h"
#include "ui_librarianui.h"
#include"addmemberui.h"
#include"addwriterui.h"
#include"addbook.h"
#include"showmembers.h"
#include"borrowboow.h"
#include"returnbook.h"
#include"pay.h"
#include"showborrowedbook.h"
LibrarianUi::LibrarianUi(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LibrarianUi)
{
    ui->setupUi(this);
}

LibrarianUi::~LibrarianUi()
{
    delete ui;
}

void LibrarianUi::on_addmember_clicked()
{
    this->hide();
    AddMemberUi * amu = new AddMemberUi;
    amu->show();
}

void LibrarianUi::on_addnewwirter_clicked()
{
    this->hide();
    AddWriterUi * awu = new AddWriterUi;
    awu->show();
}

void LibrarianUi::on_addnewbook_clicked()
{
    this->hide();
    AddBook * abu = new AddBook;
    abu->show();
}

void LibrarianUi::on_commandLinkButton_7_clicked()
{
        this->hide();
           ShowMembers * sm = new ShowMembers;
           sm->show();
}

void LibrarianUi::on_commandLinkButton_6_clicked()
{
    this->hide();
       BorrowBoow * sm = new BorrowBoow;
       sm->show();
}

void LibrarianUi::on_commandLinkButton_5_clicked()
{
    this->hide();
       ReturnBook * sm = new ReturnBook;
       sm->show();
}

void LibrarianUi::on_commandLinkButton_clicked()
{
    this->hide();
       Pay * sm = new Pay;
       sm->show();
}

void LibrarianUi::on_commandLinkButton_3_clicked()
{
    this->hide();
       ShowBorrowedBook * sm = new ShowBorrowedBook;
       sm->show();
}
