#ifndef CUSTOMER_H
#define CUSTOMER_H

#include<iostream>
#include "CustomerType.h"

class Customer
{

private:

    int _customerId;
    std::string _customerName;
    CustomerType _type;
    float _customerStoreCredits;

public:

    Customer(const Customer&)=default;

    Customer(
        int customerId,
        std::string customerName,
        CustomerType type,
        float customerStoreCredits
    );
    
    ~Customer() 
    {
        std::cout<<"Customer With id : "<<customerId()<<" is Destroyed\n";
    }

    int customerId() const { return _customerId; }
    void setCustomerId(int customerId) { _customerId = customerId; }

    std::string customerName() const { return _customerName; }
    void setCustomerName(const std::string &customerName) { _customerName = customerName; }

    CustomerType type() const { return _type; }
    void setType(const CustomerType &type) { _type = type; }

    float customerStoreCredits() const { return _customerStoreCredits; }
    void setCustomerStoreCredits(float customerStoreCredits) { _customerStoreCredits = customerStoreCredits; }

    friend std::ostream &operator<<(std::ostream &os, const Customer &rhs);

};

std::string DisplayEnum(const CustomerType type);
#endif // CUSTOMER_H
