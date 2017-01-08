#ifndef FINDBOOK_H
#define FINDBOOK_H

#include <QWidget>

namespace Ui {
class FindBook;
}

class FindBook : public QWidget
{
    Q_OBJECT

public:
    explicit FindBook(QWidget *parent = 0);
    ~FindBook();

private:
    Ui::FindBook *ui;
};

#endif // FINDBOOK_H
