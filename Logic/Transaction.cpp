//
// Created by nikang on 12/22/16.
//

#include "Transaction.h"
#include "Library.h"

Transaction::Transaction(Book *book, Member *member, Date *issue_date) : book(book), member(member) {
    this->trans_id = Library::Id_generator();
    this->issue_date = new Date();
    this->due_date = new Date();
    this->issue_date = issue_date;
}

long Transaction::getTrans_id() const {
    return trans_id;
}

Book *Transaction::getBook() const {
    return book;
}

Member *Transaction::getMember() const {
    return member;
}

Date *Transaction::getIssue_date() const {
    return issue_date;
}

Date *Transaction::getDue_date() const {
    return due_date;
}

bool Transaction::isIs_finished() const {
    return is_finished;
}

void Transaction::finished(Date *date) {
    this->due_date = date;
    this->is_finished = true;
}
