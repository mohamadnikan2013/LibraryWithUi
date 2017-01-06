//
// Created by nikang on 12/22/16.
//

#include "Library.h"

Library::Library(const string &name, Date *date) : name(name), date(date) {}

void Library::add_book(string book_name, Writer *writer) {
    Book *book = new Book(book_name, writer);
    this->books.insert(make_pair(book->getBook_id(), book));
}

long Library::Id_generator() {
    static long id = 100;
    return id++;
}

void Library::remove_book(long id) {
    this->books[id]->remove();
    this->books.erase(this->books.find(id));
}

void Library::borrow_book(long borrowed_book_id, long member_id) {
    Member *member = this->members[member_id];
    Book *book = this->books[borrowed_book_id];
    Date *date = this->date;
    if (member->getNumber_of_book_issued() >= member->getMax_book_limit()) {
        cout << "limited" << endl;
        return;
    }
    if (book->isIs_availble()) {
        cout << "this bool is not availble " << endl;
        return;
    }
    if (book->isIs_issued()) {
        cout << "this book is issued";
        return;
    }
    Transaction *transaction = new Transaction(book, member, date);
    this->transactions.insert(make_pair(transaction->getTrans_id(), transaction));
    member->borrowing(transaction);
    book->borrowed(transaction);
}

void Library::return_book(long borrowed_book_id) {
    Book *book = this->books[borrowed_book_id];
    Transaction *transaction = book->last_transaction();
    Member *member = transaction->getMember();
    int late_days = (this->date->days_so_far() - transaction->getIssue_date()->days_so_far());
    double late = 0;
    if (late_days > 7)
        late = (late_days - 7) * 500;
    member->return_book(late);
    book->returned();
    transaction->finished(this->date);
}

void Library::add_member(string name) {
    Member *member = new Member(name, this->date);
    this->members.insert(make_pair(member->getMember_id(), member));
}

void Library::add_librarian(string name) {
    Librarian *librarian = new Librarian(name);

}
