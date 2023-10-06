#ifndef CREDITCARD_H
#define CREDITCARD_H

#include<iostream>
#include "Card.h"

class CreditCard:public Card
{
private:
    float _transaction_limit;
public:
    CreditCard(
        int number,
        int cvv_number,
        CardType issuer,
        float annual_charge,
        int limit,
        float transaction_limit
    );

    int operator+(const CreditCard obj);

    float CalculateTaxCharge();
    
    ~CreditCard() 
    {
        std::cout<<"CreditCard is Destroyed \n";
    }

    float transactionLimit() const { return _transaction_limit; }

    friend std::ostream &operator<<(std::ostream &os, const CreditCard &rhs);
    
};

#endif // CREDITCARD_H
