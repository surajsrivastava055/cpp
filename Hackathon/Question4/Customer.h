#ifndef CUSTOMER_H
#define CUSTOMER_H
#include<iostream>
#include "CustomerType.h"
#include "CreditCard.h"
class Customer
{
private:
    std::string _name;
    std::string _id;
    CustomerType _type;
    CreditCard* _credit_card;

public:
    Customer(
        std::string name,
        std::string id,
        CustomerType type,
        CreditCard* credit_card
        );
    ~Customer() {
        std::cout<<"Customer is Destroyed.\n";
    }

    std::string name() const { return _name; }
    void setName(const std::string &name) { _name = name; }

    std::string id() const { return _id; }
    void setId(const std::string &id) { _id = id; }

    CustomerType type() const { return _type; }
    void setType(const CustomerType &type) { _type = type; }

    CreditCard* creditCard() const { return _credit_card; }
    void setCreditCard(CreditCard* credit_card) { _credit_card = credit_card; }

    friend std::ostream &operator<<(std::ostream &os, const Customer &rhs);

};

std::string DisplayEnum1(const CustomerType ctype);

#endif // CUSTOMER_H
