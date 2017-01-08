#include "showborrowedbook.h"
#include"mainwindow.h"
#include "ui_showborrowedbook.h"
#include"QtCore"
#include"QAbstractAnimation"
#include"Logic/Library.h"
extern Library* library;
ShowBorrowedBook::ShowBorrowedBook(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ShowBorrowedBook)
{
    ui->setupUi(this);
    model = new QStringListModel();
    QStringList list;
    list<<QString::fromStdString(library->show_borrowed_books());
    model->setStringList(list);
    ui->listView->setModel(model);
}

ShowBorrowedBook::~ShowBorrowedBook()
{
    delete ui;
}

void ShowBorrowedBook::on_pushButton_clicked()
{
    this->hide();
    MainWindow * w = new MainWindow();
    w->show();
}
