#ifndef PAY_H
#define PAY_H

#include <QWidget>

namespace Ui {
class Pay;
}

class Pay : public QWidget
{
    Q_OBJECT

public:
    explicit Pay(QWidget *parent = 0);
    ~Pay();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::Pay *ui;
};

#endif // PAY_H
