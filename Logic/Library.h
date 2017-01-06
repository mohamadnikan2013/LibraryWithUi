//
// Created by nikang on 12/22/16.
//

#ifndef AP_LIBRARY_H
#define AP_LIBRARY_H


#include <iostream>
#include <map>

#include "Librarian.h"
#include "Book.h"
#include "Date.h"
#include "Transaction.h"
#include "Member.h"

#include <random>

class Date;

class Book;

class Librarian;

class Transaction;

class Member;

using namespace std;

class Library {
    set<long> id_set;
    string name;
    map<long, Librarian *> librarians;
    map<long, Member *> members;
    map<long, Book *> books;
    Date *date;
    map<long, Transaction *> transactions;
    map<long, Writer *> writers;
public:
    Library(const string &name, Date *date);

    static long Id_generator();

    void add_book(string book_name, Writer *writer);

    void remove_book(long id);

    void borrow_book(long borrowed_book_id, long member_id);

    void return_book(long borrowed_book_id);

    void show_books();

    void show_borrowed_books();

    void show_available_books();

    void add_librarian(string name);

    void show_librarians();

    void remove_librarian();

    void add_member(string name);

    void remove_member();

    void show_members();

    void find_book();

};


#endif //AP_LIBRARY_H
