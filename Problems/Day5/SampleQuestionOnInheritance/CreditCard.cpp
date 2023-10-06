#include "CreditCard.h"

CreditCard::CreditCard(int number, int cvv_number, CardType issuer, float annual_charge, int limit, float transaction_limit)
:Card( number,cvv_number,issuer,annual_charge,limit),_transaction_limit(transaction_limit)
{

}

int CreditCard::operator+(const CreditCard obj)
{
    return limit()+obj.limit();
}

float CreditCard::CalculateTaxCharge()
{
    return 0.0f;
}

std::ostream &operator<<(std::ostream &os, const CreditCard &rhs) {
    os << static_cast<const Card &>(rhs)
       << " _transaction_limit: " << rhs._transaction_limit;
    return os;
}
