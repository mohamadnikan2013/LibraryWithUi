//
// Created by nikang on 12/22/16.
//

#ifndef AP_NOVEL_H
#define AP_NOVEL_H

#include "Book.h"
#include "Writer.h"
#include <iostream>

using namespace std;

class Writer;

//class Book;

class Novel : public Book {
    string genre;
public:
    Novel(const string &name, Writer *writer, const string genre);

};


#endif //AP_NOVEL_H
