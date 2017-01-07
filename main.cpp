#include "mainwindow.h"
#include <QApplication>
#include"Logic/Library.h"
#include"Logic/Date.h"

Date* date = new Date(1,1,2017);
Library* library = new Library("nikan",date);
int main(int argc, char *argv[])
{
    library->add_librarian("nikan" , "123");
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
