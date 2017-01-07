#include "addwriterui.h"
#include "ui_addwriterui.h"

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
