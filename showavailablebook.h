#ifndef SHOWAVAILABLEBOOK_H
#define SHOWAVAILABLEBOOK_H

#include <QWidget>
#include"QtCore"
namespace Ui {
class ShowAvailableBook;
}

class ShowAvailableBook : public QWidget
{
    Q_OBJECT

public:
    explicit ShowAvailableBook(QWidget *parent = 0);
    ~ShowAvailableBook();

private slots:
    void on_pushButton_clicked();

private:
    Ui::ShowAvailableBook *ui;
    QStringListModel * model;
};

#endif // SHOWAVAILABLEBOOK_H
