#ifndef CREDITCARD_H
#define CREDITCARD_H

#include<iostream>
#include "CardType.h"

class CreditCard
{

private:
    std::string _number;
    CardType _type;
    float _limit;
    int _card_cvv;

public:
    CreditCard(
        std::string number,
        CardType type,
        float limit,
        int card_cvv
        );

    ~CreditCard() {
        std::cout<<"Credit Card is destroyed :\n";
    }

    std::string number() const { return _number; }
    void setNumber(const std::string &number) { _number = number; }

    CardType type() const { return _type; }
    void setType(const CardType &type) { _type = type; }

    float limit() const { return _limit; }
    void setLimit(float limit) { _limit = limit; }

    int cardCvv() const { return _card_cvv; }
    void setCardCvv(int card_cvv) { _card_cvv = card_cvv; }

    friend std::ostream &operator<<(std::ostream &os, const CreditCard &rhs);

};

std::string DisplayEnum(const CardType type);


#endif // CREDITCARD_H
