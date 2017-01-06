#-------------------------------------------------
#
# Project created by QtCreator 2017-01-06T17:15:15
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = MyLibrary
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    Logic/ArtBook.cpp \
    Logic/Bill.cpp \
    Logic/Book.cpp \
    Logic/Date.cpp \
    Logic/Librarian.cpp \
    Logic/Library.cpp \
    Logic/Member.cpp \
    Logic/Novel.cpp \
    Logic/Research.cpp \
    Logic/ScienceBook.cpp \
    Logic/Transaction.cpp \
    Logic/Writer.cpp

HEADERS  += mainwindow.h \
    Logic/ArtBook.h \
    Logic/Bill.h \
    Logic/Book.h \
    Logic/Date.h \
    Logic/Librarian.h \
    Logic/Library.h \
    Logic/Member.h \
    Logic/Novel.h \
    Logic/Research.h \
    Logic/ScienceBook.h \
    Logic/Transaction.h \
    Logic/Writer.h

FORMS    += mainwindow.ui
