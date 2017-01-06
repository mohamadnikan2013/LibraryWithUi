//
// Created by nikang on 12/22/16.
//

#ifndef AP_BOOK_H
#define AP_BOOK_H

#include <iostream>
#include <vector>

#include "Writer.h"
#include "Date.h"
#include "Transaction.h"

class Writer;

class Date;

class Transaction;

using namespace std;

class Book {
    long book_id;
    string name;
    Writer *writer;
    bool is_issued;
    bool is_availble;
    vector<Transaction *> transactions;
public:
    long getBook_id() const;

    Writer *getWriter() const;

    bool isIs_issued() const;

    bool isIs_availble() const;

    const vector<Transaction *> & getTransactions() const;

    Book(const string &name, Writer *writer);

    void show_writer();

    const string &getName() const;

    void remove();

    void who_borrowed();

    void returned();

    void borrowed(Transaction *transaction);

    Transaction *last_transaction();

};


#endif //AP_BOOK_H
