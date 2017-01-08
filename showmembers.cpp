#include "showmembers.h"
#include "ui_showmembers.h"
#include"mainwindow.h"
ShowMembers::ShowMembers(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ShowMembers)
{
    ui->setupUi(this);
    model = new QStringListModel();
    QStringList list;
    list<<QString::fromStdString(library->show_members());
    model->setStringList(list);
    ui->listView->setModel(model);

}

ShowMembers::~ShowMembers()
{
    delete ui;
}

void ShowMembers::on_pushButton_clicked()
{
    this->hide();
    MainWindow * w = new MainWindow();
    w->show();
}
