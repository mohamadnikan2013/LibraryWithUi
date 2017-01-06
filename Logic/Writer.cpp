//
// Created by nikang on 12/22/16.
//

#include "Writer.h"

void Writer::add_book(Book *book) {
    this->books.insert(book);
}

void Writer::show_written_books() {
    cout << "writer id is " << this->writer_id << "writer name is :" << this->name << endl;
    int i = 1;
    for (auto book : this->books) {
        if (book->isIs_availble()) {
            cout << i << " : " << book->getName() << endl;
            i++;
        }
    }
}

const string &Writer::getName() const {
    return name;
}

long Writer::getWriter_id() const {
    return writer_id;
}
