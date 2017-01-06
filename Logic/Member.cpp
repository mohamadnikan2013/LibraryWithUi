//
// Created by nikang on 12/22/16.
//

#include "Member.h"
#include "Library.h"

long Member::getMember_id() const {
    return member_id;
}

int Member::getNumber_of_book_issued() const {
    return number_of_book_issued;
}

int Member::getMax_book_limit() const {
    return max_book_limit;
}

const string &Member::getName() const {
    return name;
}

Date *Member::getDate_of_membership() const {
    return date_of_membership;
}

Bill *Member::getBill() const {
    return bill;
}

const vector<Transaction *> &Member::getTransactions() const {
    return transactions;
}

void Member::borrowing(Transaction *transaction) {
    this->transactions.push_back(transaction);
    this->number_of_book_issued++;
}

void Member::return_book(double late) {
    this->number_of_book_issued--;
    this->bill->update_bill(late);
}

Member::Member(const string &name, Date *date_of_membership) : name(name) {
    this->max_book_limit = 4;
    this->bill = new Bill();
    this->date_of_membership = new Date;
    this->date_of_membership = date_of_membership;
    this->member_id = Library::Id_generator();
    this->is_deleted = false;
}
