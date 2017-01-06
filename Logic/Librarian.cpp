//
// Created by nikang on 12/22/16.
//

#include <ctime>
#include "Librarian.h"
#include "Library.h"

Librarian::Librarian(const string &name) : name(name) {
    this->is_deleted = false;
    this->librarian_id = Library::Id_generator();
    std::srand((unsigned int) std::time(0)); // use current time as seed for random generator
    this->password = std::rand();
}
