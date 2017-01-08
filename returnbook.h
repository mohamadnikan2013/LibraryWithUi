#ifndef RETURNBOOK_H
#define RETURNBOOK_H

#include <QWidget>

namespace Ui {
class ReturnBook;
}

class ReturnBook : public QWidget
{
    Q_OBJECT

public:
    explicit ReturnBook(QWidget *parent = 0);
    ~ReturnBook();

private slots:
    void on_pushButton_clicked();

private:
    Ui::ReturnBook *ui;
};

#endif // RETURNBOOK_H
