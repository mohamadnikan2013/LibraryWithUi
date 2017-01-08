//
// Created by nikang on 12/22/16.
//

#include "Library.h"
#include "ArtBook.h"
#include "ScienceBook.h"
#include "Research.h"
#include "Novel.h"

class Writer;

class Novel;

class Research;

class ArtBook;

class ScienceBook;

Library::Library(const string &name, Date *date) : name(name), date(date) {}

long Library::add_book(string book_name, long writer_id, string type, string description) {
    auto it = this->writers.find(writer_id);
    if (it == this->writers.end())
        return 0;
    Writer *writer = it->second;
    if (type == "sci") {
        ScienceBook *scienceBook = new ScienceBook(name, writer, description);
        this->books.insert(make_pair(scienceBook->getBook_id(), scienceBook));
        return scienceBook->getBook_id();

    } else if (type == "nov") {
        Novel *novel = new Novel(name, writer, description);
        this->books.insert(make_pair(novel->getBook_id(), novel));
        return novel->getBook_id();
    } else if (type == "res") {
        Research *research = new Research(name, writer, description);
        this->books.insert(make_pair(research->getBook_id(), research));
        return research->getBook_id();
    } else if (type == "art") {
        ArtBook *artBook = new ArtBook(name, writer);
        this->books.insert(make_pair(artBook->getBook_id(), artBook));
        return artBook->getBook_id();
    }
    return 0;
}

long Library::Id_generator() {
    static long id = 100;
    return id++;
}

void Library::remove_book(long id) {
    this->books[id]->remove();
    this->books.erase(this->books.find(id));
}

bool Library::borrow_book(long borrowed_book_id, long member_id) {
    Member *member = this->members[member_id];
    Book *book = this->books[borrowed_book_id];
    Date *date = this->date;
    if (member->getNumber_of_book_issued() >= member->getMax_book_limit()) {
        cout << "limited" << endl;
        return false;
    }
    if (!book->isIs_availble()) {
        cout << "this book is not availble " << endl;
        return false;
    }
    if (book->isIs_issued()) {
        cout << "this book is issued";
        return false;
    }
    Transaction *transaction = new Transaction(book, member, date);
    this->transactions.insert(make_pair(transaction->getTrans_id(), transaction));
    member->borrowing(transaction);
    book->borrowed(transaction);
    return true;
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

long Library::add_member(string name) {
    Member *member = new Member(name, this->date);
    this->members.insert(make_pair(member->getMember_id(), member));
    return member->getMember_id();
}

long Library::add_librarian(string name, string password) {
    Librarian *librarian = new Librarian(name, password);
    this->librarians.insert(make_pair(librarian->getLibrarian_id(), librarian));
    return librarian->getLibrarian_id();

}

bool Library::login(long id, string password) {
    auto it = this->librarians.find(id);
    if (it != this->librarians.end()) {
        cout << "ge";
        Librarian *librarian = it->second;
        return !(librarian->isIs_deleted() || (librarian->getPassword() != password));
    } else
        return false;
}

long Library::add_writer(string name) {
    Writer *writer = new Writer(name);
    long id = writer->getWriter_id();
    this->writers.insert(make_pair(id, writer));
    return id;
}

string Library::show_members() {
    string str = "List of Member is : \n";
    for (auto m : this->members) {
        if (!m.second->isIs_deleted()) {
            str += m.second->getMember_id() + "   " + m.second->getName() + "\n";
        }
    }
    return str;

}

double Library::Pay(long user_id) {
    auto it = this->members.find(user_id);
    if (it == this->members.end()) {
        cout << "no member ";
        return 0;
    }
    Member *member = it->second;
    return member->getBill()->pay_bill();
}

string Library::show_borrowed_books() {
    string str = "Issued Book are :  \n";
    for (auto it : this->books) {
        Book *book = it.second;
        if (book->isIs_issued()) {
            str += "name : " + book->getName() + "  memeber  : " + book->last_transaction()->getMember()->getName() +
                   " date issued is : " +
                   book->last_transaction()->getIssue_date()->display() + "\n";
        }
    }
    return str;
}

long Library::find_book(string name) {
    for (auto it : this->books) {
        Book *book = it.second;
        if (book->getName() == name) {
            return book->getBook_id();
        }
    }
    return 0;
}

string Library::remove_member(long id) {
    Member *member = this->members.find(id)->second;
    string str = member->remove();
    this->members.erase(this->members.find(id));
    return str;
}

string Library::show_available_books() {
    string str = "Issued Book are :  \n";
    for (auto it : this->books) {
        Book *book = it.second;
        if (book->isIs_availble()) {
            str += "name : " + book->getName() + "\n";
        }
    }
    return str;
}
