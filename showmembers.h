#ifndef SHOWMEMBERS_H
#define SHOWMEMBERS_H

#include <QWidget>
#include"QtCore"
#include"QAbstractAnimation"
#include"Logic/Library.h"
extern Library* library;
namespace Ui {
class ShowMembers;
}

class ShowMembers : public QWidget
{
    Q_OBJECT

public:
    explicit ShowMembers(QWidget *parent = 0);
    ~ShowMembers();

private slots:

    void on_pushButton_clicked();

private:
    Ui::ShowMembers *ui;
    QStringListModel * model;
};

#endif // SHOWMEMBERS_H
