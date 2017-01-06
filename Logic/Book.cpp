//
// Created by nikang on 12/22/16.
//

#include "Book.h"
#include "Library.h"

Book::Book(const string &name, Writer *writer) : name(name), writer(writer) {
    this->book_id = Library::Id_generator();
    writer->add_book(this);
    this->is_availble = true;
}

void Book::remove() {
    this->is_availble = false;
}

const string &Book::getName() const {
    return name;
}

void Book::show_writer() {
    cout << "the name is : " << this->name;
    cout << "    >>>->>>  and the writer name is : " << this->writer->getName() << endl;

}

void Book::who_borrowed() {
    if (!this->is_availble) {
        cout << "this book is not available" << endl;
        return;
    }
    if (this->is_issued) {
        cout << "borrower name is :  " << this->transactions.back()->getMember()->getName() << endl;
        return;
    }
    cout << "not issued" << endl;
    return;

}

long Book::getBook_id() const {
    return book_id;
}

Writer *Book::getWriter() const {
    return writer;
}

bool Book::isIs_issued() const {
    return is_issued;
}

bool Book::isIs_availble() const {
    return is_availble;
}

const vector<Transaction *> & Book::getTransactions() const {
    return transactions;
}

void Book::borrowed(Transaction *transaction) {
    this->is_issued = true;
    this->transactions.push_back(transaction);
}

void Book::returned() {
    this->is_issued = false;
}

Transaction *Book::last_transaction() {
    return this->transactions[this->transactions.size() - 1];
}
