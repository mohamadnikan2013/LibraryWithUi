//
// Created by nikang on 12/22/16.
//

#ifndef AP_ARTBOOK_H
#define AP_ARTBOOK_H

#include "Book.h"
#include "Writer.h"
#include <iostream>

using namespace std;

class Writer;

//class Book;

class ArtBook : public Book {
public:
    ArtBook(const string &name, Writer *writer);

};


#endif //AP_ARTBOOK_H
