//
// Created by nikang on 12/22/16.
//

#ifndef AP_SCIENCEBOOK_H
#define AP_SCIENCEBOOK_H

#include <iostream>

#include "Book.h"

using namespace std;
class Book;

class ScienceBook : public Book {
    string Field;
public:
    ScienceBook(const string &name, Writer *writer, const string &Field);

};


#endif //AP_SCIENCEBOOK_H
