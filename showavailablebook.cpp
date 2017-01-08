#include "showavailablebook.h"
#include "ui_showavailablebook.h"
#include"librarianui.h"
#include"QtCore"
#include"QAbstractAnimation"
#include"Logic/Library.h"
extern Library* library;

ShowAvailableBook::ShowAvailableBook(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ShowAvailableBook)
{
    ui->setupUi(this);
    model = new QStringListModel();
    QStringList list;
    list<<QString::fromStdString(library->show_available_books());
    model->setStringList(list);
    ui->listView->setModel(model);
}

ShowAvailableBook::~ShowAvailableBook()
{
    delete ui;
}

void ShowAvailableBook::on_pushButton_clicked()
{
    this->hide();
    LibrarianUi *l = new LibrarianUi;
    l->show();
}
