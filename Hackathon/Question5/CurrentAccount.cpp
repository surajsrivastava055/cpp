#include "CurrentAccount.h"

CurrentAccount::CurrentAccount(long accountNumber, float accountBalance, const float accountMinBalance, float currentAccountMinimumQuarterBalance, CurrentAccountType catype)
:Account(accountNumber,accountBalance,accountMinBalance),_currentAccountMinimumQuarterBalance(currentAccountMinimumQuarterBalance),_catype(catype)
{
}
float CurrentAccount::CalculateInterestAmount()
{
    if(CurrentAccount::catype()==CurrentAccountType::BASIC){
        return 0.06f * accountBalance();
    }else{
        return 0.1f * accountBalance();
    }
}
std::ostream &operator<<(std::ostream &os, const CurrentAccount &rhs)
{
    os << static_cast<const Account &>(rhs)
       << " _currentAccountMinimumQuarterBalance: " << rhs._currentAccountMinimumQuarterBalance
       << " _catype: " << DisplayEnum2(rhs._catype);
    return os;
}

std::string DisplayEnum2(const CurrentAccountType satype)
{
    if(satype==CurrentAccountType::PREMIUM){
        return "PREMIUM";
    }else{
        return "BASIC";
    }
}
