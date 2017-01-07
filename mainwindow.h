#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include"Logic/Library.h"
extern Library* library;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:


    void on_SignUpButton_pressed();

    void on_SignInButton_pressed();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
