#include<iostream>
#include "InsuranceType.h"

class Insurance
{
private:
     
public:
    int _insuranceID;
     float _insuranceAmount;
     InsuranceType _iType;
Insurance( ) =default;
Insurance(int id, float amount, InsuranceType type) {
this->_insuranceID= id;
        this->_insuranceAmount=amount;
        this->_iType=type;
        }
    ~Insurance() {
        std::cout<<"Insurance with id:\t"
           <<this->_insuranceID
           <<"is now destroyed(deleted)\n";         
            }
    
};