#ifndef LIBRARIANUI_H
#define LIBRARIANUI_H

#include <QWidget>

namespace Ui {
class LibrarianUi;
}

class LibrarianUi : public QWidget
{
    Q_OBJECT

public:
    explicit LibrarianUi(QWidget *parent = 0);
    ~LibrarianUi();

private:
    Ui::LibrarianUi *ui;
};

#endif // LIBRARIANUI_H
