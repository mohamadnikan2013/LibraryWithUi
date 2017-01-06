//
// Created by nikang on 12/22/16.
//

#ifndef AP_TRANSACTION_H
#define AP_TRANSACTION_H

#include "Date.h"
#include "Book.h"
#include "Member.h"

class Date;

class Book;

class Member;

class Transaction {
    long trans_id;
    Book *book;
    Member *member;
    Date *issue_date;
    Date *due_date;
    bool is_finished;
public:
    Transaction(Book *book, Member *member, Date *issue_date);

    long getTrans_id() const;

    Book *getBook() const;

    Member *getMember() const;

    Date *getIssue_date() const;

    Date *getDue_date() const;

    bool isIs_finished() const;

    void finished(Date *date);
};


#endif //AP_TRANSACTION_H
