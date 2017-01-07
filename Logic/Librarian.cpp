//
// Created by nikang on 12/22/16.
//

#include <ctime>
#include "Librarian.h"
#include "Library.h"

Librarian::Librarian(const string &name, string password) : name(name) , password(password) {
    this->is_deleted = false;
    this->librarian_id = Library::Id_generator();
    this->password = password;
}

long Librarian::getLibrarian_id() const {
    return librarian_id;
}

const string &Librarian::getPassword() const {
    return password;
}

bool Librarian::isIs_deleted() const {
    return is_deleted;
}
