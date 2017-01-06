#include "librarianui.h"
#include "ui_librarianui.h"

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
