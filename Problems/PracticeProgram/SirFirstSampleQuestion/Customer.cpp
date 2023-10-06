#include "Customer.h"

Customer::Customer(int customerId, std::string customerName, CustomerType type, float customerStoreCredits)
:_customerId(customerId),_customerName(customerName),_type(type),_customerStoreCredits(customerStoreCredits)
{
}

std::ostream &operator<<(std::ostream &os, const Customer &rhs) {
    os << "_customerId: " << rhs._customerId
       << " _customerName: " << rhs._customerName
       << " _type: " << DisplayEnum(rhs._type)
       << " _customerStoreCredits: " << rhs._customerStoreCredits;
    return os;
}

std::string DisplayEnum(const CustomerType type)
{
    if(type==CustomerType::PREMINUM){
        return "PREMINUM";
    }else if(type==CustomerType::REGULAR){
        return "REGULAR";
    }else{
        return "VIP";
    }
}
