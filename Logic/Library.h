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
#include "Writer.h"
//#include "ScienceBook.h"
//#include "ArtBook.h"
//#include "Novel.h"
//#include "Research.h"
#include <random>

class Book;

class Date;

class Librarian;

class Transaction;

class Member;

class Writer;



using namespace std;

class Library {
    string name;
    string password;
    map<long, Librarian *> librarians;
    map<long, Member *> members;
    map<long, Book *> books;
    Date *date;
    map<long, Transaction *> transactions;
    map<long, Writer *> writers;
public:
    Library(const string &name, Date *date);

    static long Id_generator();

    long add_book(string book_name, long writer_id, string type, string description = "");

    void remove_book(long id);

    void borrow_book(long borrowed_book_id, long member_id);

    void return_book(long borrowed_book_id);

    void show_books();

    void show_borrowed_books();

    long add_writer(string name);

    void show_available_books();

    long add_librarian(string name, string password);

    void show_librarians();

    void remove_librarian();

    long add_member(string name);

    void remove_member();

    void show_members();

    void find_book();

    bool login(long id, string password);

};


#endif //AP_LIBRARY_H
