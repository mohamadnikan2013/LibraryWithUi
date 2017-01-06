//
// Created by nikang on 12/22/16.
//

#include "Research.h"

Research::Research(const string &name, Writer *writer, const string &field) : Book(name, writer), field(field) {}
