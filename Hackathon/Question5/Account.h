#ifndef ACCOUNT_H
#define ACCOUNT_H
#include<iostream>
class Account
{

private:
    long _accountNumber;
    float _accountBalance;
    const float _accountMinBalance;

public:
    //Parametrized constructor.
    Account(
        long accountNumber,
        float accountBalance,
        const float accountMinBalance
        );

    //default constructor.
    Account()=default;

    //copy constructor
    Account(const Account&)=default;

    //pure vitual function 
    virtual float CalculateInterestAmount()=0;
    
    // vitual destructor
    virtual ~Account() {
        std::cout<<"Account is destoyed\n";
    }

    // getter and setter for all member.
    long accountNumber() const { return _accountNumber; }
    void setAccountNumber(long accountNumber) { _accountNumber = accountNumber; }

    float accountBalance() const { return _accountBalance; }
    void setAccountBalance(float accountBalance) { _accountBalance = accountBalance; }

    float accountMinBalance() const { return _accountMinBalance; }


    //friend funtion to perform display operation
    friend std::ostream &operator<<(std::ostream &os, const Account &rhs);

};

#endif // ACCOUNT_H
