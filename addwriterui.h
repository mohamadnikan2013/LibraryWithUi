#ifndef ADDWRITERUI_H
#define ADDWRITERUI_H

#include <QWidget>
#include"Logic/Library.h"

extern Library* library;
namespace Ui {
class AddWriterUi;
}

class AddWriterUi : public QWidget
{
    Q_OBJECT

public:
    explicit AddWriterUi(QWidget *parent = 0);
    ~AddWriterUi();

private slots:
    void on_pushButton_clicked();

private:
    Ui::AddWriterUi *ui;
};

#endif // ADDWRITERUI_H
