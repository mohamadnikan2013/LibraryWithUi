#include "showavailablebook.h"
#include "ui_showavailablebook.h"

ShowAvailableBook::ShowAvailableBook(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ShowAvailableBook)
{
    ui->setupUi(this);
}

ShowAvailableBook::~ShowAvailableBook()
{
    delete ui;
}
