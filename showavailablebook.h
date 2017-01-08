#ifndef SHOWAVAILABLEBOOK_H
#define SHOWAVAILABLEBOOK_H

#include <QWidget>

namespace Ui {
class ShowAvailableBook;
}

class ShowAvailableBook : public QWidget
{
    Q_OBJECT

public:
    explicit ShowAvailableBook(QWidget *parent = 0);
    ~ShowAvailableBook();

private:
    Ui::ShowAvailableBook *ui;
};

#endif // SHOWAVAILABLEBOOK_H
