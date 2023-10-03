#include "Customer.h"
#include "Type.h"

Customer::Customer(int _customerID, std::string _customerName, Type _c_type, int _customerStoreCredits)

:_customerID(_customerID), _customerName(_customerName), _c_type(_c_type), _customerStoreCredits(_customerStoreCredits)
{
}

std::ostream &operator<<(std::ostream &os, const Customer &rhs) {
    os << " CustomerID : " << rhs._customerID
       << " \t\tCustomer Name : " << rhs._customerName
       << " \tCustomer type : " << DisplayEnum(rhs._c_type)
       << " \tCustomer Store Credits: " << rhs._customerStoreCredits;
    return os;
}

std::string DisplayEnum(const Type value)
{

    if(value==Type::PREMIUM) return "PREMIUM";
    if(value==Type::REGULAR) return "REGULAR";
    if(value==Type::VIP) return "VIP";
    return "none";


    
}
