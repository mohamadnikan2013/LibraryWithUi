//
// Created by nikang on 12/22/16.
//

#include "Bill.h"

Bill::Bill(double amount) : amount(amount) {}

void Bill::update_bill(double money) {
    this->amount += money;
}

double Bill::pay_bill() {
    double am =  this->amount ;
    this->amount = 0;
    return am;
}
