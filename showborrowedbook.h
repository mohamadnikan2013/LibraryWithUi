#ifndef SHOWBORROWEDBOOK_H
#define SHOWBORROWEDBOOK_H
#include"QtCore"
#include <QWidget>

namespace Ui {
class ShowBorrowedBook;
}

class ShowBorrowedBook : public QWidget
{
    Q_OBJECT

public:
    explicit ShowBorrowedBook(QWidget *parent = 0);
    ~ShowBorrowedBook();

private slots:
    void on_pushButton_clicked();

private:
    Ui::ShowBorrowedBook *ui;
    QStringListModel * model;
};

#endif // SHOWBORROWEDBOOK_H
