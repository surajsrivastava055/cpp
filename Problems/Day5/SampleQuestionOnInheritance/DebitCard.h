#ifndef DEBITCARD_H
#define DEBITCARD_H

#include<iostream>
#include "DebitCardCategory.h"
#include "Card.h"

class DebitCard:public Card
{
private:
    DebitCardCategory _category;
public:
    DebitCard(
        int number,
        int cvv_number,
        CardType issuer,
        float annual_charge,
        int limit,
        DebitCardCategory category
    );

    float CalculateTaxCharge();

    ~DebitCard() 
    {
       std::cout<<"Debit Card is destroyed";
    }

    DebitCardCategory category() const { return _category; }

    friend std::ostream &operator<<(std::ostream &os, const DebitCard &rhs);
    
};

std::string DisplayEnum1(const DebitCardCategory cate);

#endif // DEBITCARD_H
