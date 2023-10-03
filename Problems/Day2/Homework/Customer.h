#ifndef CUSTOMER_H
#define CUSTOMER_H
#include <iostream>
#include "Type.h"
class Customer
{
private:
        int _customerID;
        std::string _customerName;
        Type _c_type;
        int _customerStoreCredits;






public:
Customer(const Customer&)=default;
    Customer( 
        int _customerID,
        std::string _customerName,
        Type _c_type,
        int _customerStoreCredits
        );
        
    

    int customerID() const { return _customerID; }
    void setCustomerID(int customerID) { _customerID = customerID; }

    std::string customerName() const { return _customerName; }
    void setCustomerName(const std::string &customerName) { _customerName = customerName; }

    int customerStoreCredits() const { return _customerStoreCredits; }
    void setCustomerStoreCredits(int customerStoreCredits) { _customerStoreCredits = customerStoreCredits; }

    Type cType() const { return _c_type; }
    void setCType(const Type &c_type) { _c_type = c_type; }

    friend std::ostream &operator<<(std::ostream &os, const Customer &rhs);
    ~Customer() {

            std::cout<<
            "customer with id"<<customerID()<<"\tdestroyed\n";
            }
    
};

std::string DisplayEnum(const Type value);


#endif // CUSTOMER_H
