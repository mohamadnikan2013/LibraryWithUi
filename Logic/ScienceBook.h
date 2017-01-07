//
// Created by nikang on 12/22/16.
//

#ifndef AP_SCIENCEBOOK_H
#define AP_SCIENCEBOOK_H


#include "Book.h"
#include "Writer.h"
#include <iostream>

using namespace std;


class Writer;


//class Book;

class ScienceBook : public Book {
    string Field;
public:
    ScienceBook(const string &name, Writer *writer, const string &Field);

};


#endif //AP_SCIENCEBOOK_H
