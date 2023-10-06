#include "Card.h"

Card::Card(int number, int cvv_number, CardType issuer, float annual_charge, int limit)
:_issuer(issuer),_annual_charge(annual_charge),_limit(limit)
{   
    if(number>=1000 && number<10000){
        _number=number;
    }
    else{
        std::runtime_error("Invalid Number");
    }

    if(cvv_number>=100 && cvv_number<1000){
        _cvv_number=cvv_number;
    }
    else{
        std::runtime_error("InValid CVV");
    }
}
std::ostream &operator<<(std::ostream &os, const Card &rhs) {
    os << "_number: " << rhs._number
       << " _cvv_number: " << rhs._cvv_number
       << " _issuer: " << DisplayEnum(rhs._issuer)
       << " _annual_charge: " << rhs._annual_charge
       << " _limit: " << rhs._limit;
    return os;
}

std::string DisplayEnum(const CardType type)
{
    if(type==CardType::MASTERCARD)
    {
        return "MASTERCARD";
    }else if(type==CardType::RUPAY){
        return "RUPAY";
    }else{
        return "VISA";
    }
}
