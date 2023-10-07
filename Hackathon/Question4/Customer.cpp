#include "Customer.h"

Customer::Customer(std::string name, std::string id, CustomerType type, CreditCard *credit_card)
:_name(name),_id(id),_type(type),_credit_card(credit_card)
{
}
std::ostream &operator<<(std::ostream &os, const Customer &rhs) {
    os << "_name: " << rhs._name
       << " _id: " << rhs._id
       << " _type: " << DisplayEnum1(rhs._type)
       << " _credit_card: " << rhs._credit_card;
    return os;
}

std::string DisplayEnum1(const CustomerType ctype)
{
    if(ctype==CustomerType::PRIVILEGED){
        return "PRIVILEGED";
    }else if(ctype==CustomerType::ELITE){
        return "ELITE";
    }else{
        return "PRO";
    }
}
