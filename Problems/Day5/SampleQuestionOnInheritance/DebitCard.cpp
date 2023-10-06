#include "DebitCard.h"

DebitCard::DebitCard(int number, int cvv_number, CardType issuer, float annual_charge, int limit, DebitCardCategory category)
:Card( number,cvv_number,issuer,annual_charge,limit),_category(category)
{
}

std::ostream &operator<<(std::ostream &os, const DebitCard &rhs) {
    os << static_cast<const Card &>(rhs)
       << " _category: " << DisplayEnum1(rhs._category);
    return os;
}

std::string DisplayEnum1(const DebitCardCategory cate)
{
    if(cate==DebitCardCategory::SIGNATURE){
        return "SIGNATURE";
    }else if(cate==DebitCardCategory::PREMINUM){
        return "PREMINUM";
    }else{
        return "DELUXE";
    }
}

float DebitCard::CalculateTaxCharge()
{
    float total=0.0f;
    if(DebitCard::issuer()==CardType::VISA){
        
    }
}
