//
// Created by nikang on 12/22/16.
//

#ifndef AP_BILL_H
#define AP_BILL_H


class Bill {
    double amount;

public:
    Bill(double amount = 0);

    void pay_bill();

    void update_bill(double money);
};


#endif //AP_BILL_H
