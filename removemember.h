#ifndef REMOVEMEMBER_H
#define REMOVEMEMBER_H

#include <QWidget>

namespace Ui {
class RemoveMember;
}

class RemoveMember : public QWidget
{
    Q_OBJECT

public:
    explicit RemoveMember(QWidget *parent = 0);
    ~RemoveMember();

private:
    Ui::RemoveMember *ui;
};

#endif // REMOVEMEMBER_H
