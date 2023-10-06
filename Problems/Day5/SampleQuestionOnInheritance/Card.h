#ifndef CARD_H
#define CARD_H

#include<iostream>
#include "CardType.h"

class Card
{
private:
    int _number;
    int _cvv_number;
    CardType _issuer;
    float _annual_charge;
    int _limit;
public:
    Card(
        int number,
        int cvv_number,
        CardType issuer,
        float annual_charge,
        int limit
    );

    

    virtual ~Card() 
    {
        std::cout<<"Card is destroyed \n";
    }

    virtual float CalculateTaxCharge()=0;

    int number() const { return _number; }

    int cvvNumber() const { return _cvv_number; }

    CardType issuer() const { return _issuer; }

    float annualCharge() const { return _annual_charge; }

    int limit() const { return _limit; }

    friend std::ostream &operator<<(std::ostream &os, const Card &rhs);

};

std::string DisplayEnum(const CardType type);




#endif // CARD_H
