//
// Created by nikang on 12/22/16.
//

#ifndef AP_WRITER_H
#define AP_WRITER_H

#include <iostream>
#include <set>
#include "Book.h"
#include "Library.h"

using namespace std;

class Book;

class Library;

using namespace std;

class Writer {
    long writer_id;
    string name;
    set<Book *> books;
public:
    long getWriter_id() const;

    const string &getName() const;

    Writer(const string &name);

    void show_written_books();

    void add_book(Book *book);
};


#endif //AP_WRITER_H
