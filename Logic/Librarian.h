//
// Created by nikang on 12/22/16.
//

#ifndef AP_LIBRARIAN_H
#define AP_LIBRARIAN_H

#include <iostream>

using namespace std;

class Librarian {
    long librarian_id;
    string name;
    string password;
    bool is_deleted;
public:
    Librarian(const string &name, string password);

    bool isIs_deleted() const;

    const string &getPassword() const;

    long getLibrarian_id() const;
};


#endif //AP_LIBRARIAN_H
