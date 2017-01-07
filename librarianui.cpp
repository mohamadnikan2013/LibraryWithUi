#include "librarianui.h"
#include "ui_librarianui.h"
#include"addmemberui.h"
#include"addwriterui.h"
#include"addbook.h"


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
