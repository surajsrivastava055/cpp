#ifndef CURRENTACCOUNT_H
#define CURRENTACCOUNT_H
#include "Account.h"
#include "CurrentAccountType.h"
#include <ostream>

class CurrentAccount:public Account
{

private:
    float _currentAccountMinimumQuarterBalance;
    CurrentAccountType _catype;

public:
    CurrentAccount(
        long accountNumber,
        float accountBalance,
        const float accountMinBalance,
        float currentAccountMinimumQuarterBalance,
        CurrentAccountType catype
    );

    float CalculateInterestAmount()override;
    ~CurrentAccount() {
        std::cout<<"Current account is Destroyed \n";
    }

    float currentAccountMinimumQuarterBalance() const { return _currentAccountMinimumQuarterBalance; }
    void setCurrentAccountMinimumQuarterBalance(float currentAccountMinimumQuarterBalance) { _currentAccountMinimumQuarterBalance = currentAccountMinimumQuarterBalance; }

    CurrentAccountType catype() const { return _catype; }
    void setCatype(const CurrentAccountType &catype) { _catype = catype; }

    friend std::ostream &operator<<(std::ostream &os, const CurrentAccount &rhs);

};

std::string DisplayEnum2(const CurrentAccountType satype);

#endif // CURRENTACCOUNT_H
