//
// Created by nikang on 12/22/16.
//

#ifndef AP_DATE_H
#define AP_DATE_H

#include <iostream>
#include <math.h>

using namespace std;

class Date {
    int month, day, year;
    const static string name[];
public:
    Date(int month = 1, int day = 1, int year = 1);

    void set_date(int month, int day, int year);

    void display();

    int days_so_far();

    int sub(Date *date);
};


#endif //AP_DATE_H
