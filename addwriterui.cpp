#include "addwriterui.h"
#include "ui_addwriterui.h"
#include"librarianui.h"
#include"QMessageBox"
AddWriterUi::AddWriterUi(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AddWriterUi)
{
    ui->setupUi(this);
}

AddWriterUi::~AddWriterUi()
{
    delete ui;
}

void AddWriterUi::on_pushButton_clicked()
{
    QString name = ui->Name->text();
    long id = library->add_writer(name.toStdString());
    this->hide();
    QString str = "the Writer Id is   ";
    str+=QString::number(id);
    QMessageBox messageBox;
    messageBox.information(0,"ID",str);
    messageBox.setFixedSize(500,200);
    messageBox.show();
    LibrarianUi *l = new LibrarianUi;
    l->show();
}
