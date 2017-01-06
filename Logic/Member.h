//
// Created by nikang on 12/22/16.
//

#ifndef AP_MEMBER_H
#define AP_MEMBER_H

#include <iostream>
#include <set>

#include "Bill.h"
#include "Date.h"
#include "Transaction.h"

class Bill;

class Date;

class Transaction;

using namespace std;

class Member {
    long member_id;
    int number_of_book_issued;
    int max_book_limit;
    string name;
    Date *date_of_membership;
    vector<Transaction *> transactions;
    Bill *bill;
    bool is_deleted;
public:
    Member(const string &name, Date *date_of_membership);

    long getMember_id() const;

    int getNumber_of_book_issued() const;

    int getMax_book_limit() const;

    const string &getName() const;

    Date *getDate_of_membership() const;

    Bill *getBill() const;

    const vector<Transaction *> &getTransactions() const;

    void borrowing(Transaction *transaction);

    void return_book(double late);

};


#endif //AP_MEMBER_H
