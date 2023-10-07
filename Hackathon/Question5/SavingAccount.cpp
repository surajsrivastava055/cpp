#include "SavingAccount.h"

SavingAccount::SavingAccount(long accountNumber, float accountBalance, const float accountMinBalance, SavingAccountType stype)
:Account(accountNumber,accountBalance,accountMinBalance),_stype(stype)
{
}

float SavingAccount::CalculateInterestAmount()
{
    if(SavingAccount::stype()==SavingAccountType::METRO || SavingAccount::stype()==SavingAccountType::URBAN){
        return 0.05 * accountBalance();
    }else{
        return 0.07 * accountBalance();
    }
    
}

std::ostream &operator<<(std::ostream &os, const SavingAccount &rhs) {
    os << static_cast<const Account &>(rhs)
       << " _stype: " << DisplayEnum1(rhs._stype);
    return os;
}

std::string DisplayEnum1(const SavingAccountType satype)
{
    if(satype==SavingAccountType::SPECIAL){
        return "SPECIAL";
    }else if(satype==SavingAccountType::URBAN){
        return "URBAN";
    }else{
        return "METRO";
    }
}
