#include "mainwindow.h"
#include <QApplication>
#include"Logic/Library.h"
#include"Logic/Date.h"

Date* date = new Date(1,1,2017);
Library* library = new Library("nikan",date);
int main(int argc, char *argv[])
{
    library->add_librarian("nikan" , "123");
    library->add_member("nikan");
    library->add_writer("nikan");
    library->add_book("nikan" , 102 , "nov" ,"hello world" );
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
