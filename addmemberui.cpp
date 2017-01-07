#include "addmemberui.h"
#include "ui_addmemberui.h"
#include"librarianui.h"
#include"QMessageBox"
AddMemberUi::AddMemberUi(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AddMemberUi)
{
    ui->setupUi(this);
}

AddMemberUi::~AddMemberUi()
{
    delete ui;
}

void AddMemberUi::on_pushButton_pressed()
{
    QString name = ui->Name->text();
    long id = library->add_member(name.toStdString());
    this->hide();
    QString str = "the Member Id is   ";
    str+=QString::number(id);
    QMessageBox messageBox;
    messageBox.information(0,"ID",str);
    messageBox.setFixedSize(500,200);
    messageBox.show();
    LibrarianUi *l = new LibrarianUi;
    l->show();
}
