//
// Created by nikang on 12/22/16.
//

#include "Novel.h"

Novel::Novel(const string &name, Writer *writer, const string genre) : Book(name, writer) {
    this->genre = genre;
}
