#include "CreditCard.h"

CreditCard::CreditCard(std::string number, CardType type, float limit, int card_cvv)
:_number(number),_type(type),_limit(limit)
{
    if(card_cvv>=100 && card_cvv<=999){
        _card_cvv=card_cvv;
    }
    else{
        throw std::runtime_error("CVV is not right");
    }
}
std::ostream &operator<<(std::ostream &os, const CreditCard &rhs) {
    os << "_number: " << rhs._number
       << " _type: " << DisplayEnum(rhs._type)
       << " _limit: " << rhs._limit
       << " _card_cvv: " << rhs._card_cvv;
    return os;
}

std::string DisplayEnum(const CardType type)
{
    if(type==CardType::SIGNATURE){
        return "SIGNATURE";
    }
    else if(type==CardType::MILES){
        return "MILES";
    }else{
        return "NEO";
    }
}
