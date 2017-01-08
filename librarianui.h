#ifndef LIBRARIANUI_H
#define LIBRARIANUI_H

#include <QWidget>
#include"Logic/Library.h"
extern Library* library;
namespace Ui {
class LibrarianUi;
}

class LibrarianUi : public QWidget
{
    Q_OBJECT

public:
    explicit LibrarianUi(QWidget *parent = 0);
    ~LibrarianUi();

private slots:
    void on_addmember_clicked();

    void on_addnewwirter_clicked();

    void on_addnewbook_clicked();

    void on_commandLinkButton_7_clicked();

    void on_commandLinkButton_6_clicked();

    void on_commandLinkButton_5_clicked();

    void on_commandLinkButton_clicked();

    void on_commandLinkButton_3_clicked();

    void on_commandLinkButton_8_clicked();

private:
    Ui::LibrarianUi *ui;
};

#endif // LIBRARIANUI_H
