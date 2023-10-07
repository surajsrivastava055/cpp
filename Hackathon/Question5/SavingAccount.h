#ifndef SAVINGACCOUNT_H
#define SAVINGACCOUNT_H
#include "SavingAccountType.h"
#include "Account.h"
#include <iostream>

class SavingAccount:public Account
{
private:
    SavingAccountType _stype;

public:
    SavingAccount(
        long accountNumber,
        float accountBalance,
        const float accountMinBalance,
        SavingAccountType stype
    );

    //ability to default construct object.
    SavingAccount()=default;

    //copy constructor (shallow constructor)
    SavingAccount(const SavingAccount&)=default;

    //

    //overriding the abstract method.
    float CalculateInterestAmount()override;



    ~SavingAccount() {
       std::cout<<"Saving Account is Deleteed\n"; 
    }

    //getter and setter for access private data.
    SavingAccountType stype() const { return _stype; }
    void setStype(const SavingAccountType &stype) { _stype = stype; }

    //friend function to display the data.
    friend std::ostream &operator<<(std::ostream &os, const SavingAccount &rhs);

};

std::string DisplayEnum1(const SavingAccountType satype);

#endif // SAVINGACCOUNT_H
