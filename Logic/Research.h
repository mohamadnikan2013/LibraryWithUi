//
// Created by nikang on 12/22/16.
//

#ifndef AP_RESEARCH_H
#define AP_RESEARCH_H

#include "Book.h"
#include "Writer.h"
#include <iostream>

using namespace std;

class Writer;

//class Book;

class Research : public Book {
    string field;
public:
    Research(const string &name, Writer *writer, const string &field);

};


#endif //AP_RESEARCH_H
