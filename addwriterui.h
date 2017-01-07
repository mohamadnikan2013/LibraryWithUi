#ifndef ADDWRITERUI_H
#define ADDWRITERUI_H

#include <QWidget>

namespace Ui {
class AddWriterUi;
}

class AddWriterUi : public QWidget
{
    Q_OBJECT

public:
    explicit AddWriterUi(QWidget *parent = 0);
    ~AddWriterUi();

private:
    Ui::AddWriterUi *ui;
};

#endif // ADDWRITERUI_H
