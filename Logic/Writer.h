//
// Created by nikang on 12/22/16.
//

#ifndef AP_WRITER_H
#define AP_WRITER_H

#include <iostream>
#include <set>
#include "Book.h"

class Book;

using namespace std;

class Writer {
    long writer_id;
public:
    long getWriter_id() const;

public:
    const string &getName() const;

private:
    string name;
    set<Book *> books;
public:
    void show_written_books();

    void add_book(Book *book);
};


#endif //AP_WRITER_H
