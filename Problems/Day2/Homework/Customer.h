#ifndef CUSTOMER_H
#define CUSTOMER_H
#include <iostream>
#include "Type.h"
class Customer
{
private:
        int _customerID;
        std::string _customerName;
        Type _c_type;
        int _customerStoreCredits;





public:
Customer(const Customer&)=default;
    Customer( {}
    ~Customer() {}
};

#endif // CUSTOMER_H
