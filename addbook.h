#ifndef ADDBOOK_H
#define ADDBOOK_H

#include <QWidget>
#include"Logic/Library.h"

extern Library* library;
namespace Ui {
class AddBook;
}

class AddBook : public QWidget
{
    Q_OBJECT

public:
    explicit AddBook(QWidget *parent = 0);
    ~AddBook();

private slots:
    void on_add_clicked();

private:
    Ui::AddBook *ui;
};

#endif // ADDBOOK_H
