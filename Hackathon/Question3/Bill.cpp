#include "Bill.h"

Bill::Bill(float billAmount, float billTaxAmount, Invoice *billAssociatedInvoice)
:_billAmount(billAmount),_billAssociatedInvoice(billAssociatedInvoice)
{
    if(billTaxAmount>billAmount){
        throw std::runtime_error("_billTaxAmount can not be grater then actual billAmount");
    }
    else{
        _billTaxAmount=billTaxAmount;
    }
}

std::ostream &operator<<(std::ostream &os, const Bill &rhs) {
    os << "_billAmount: " << rhs._billAmount
       << " _billTaxAmount: " << rhs._billTaxAmount
       << " _billAssociatedInvoice: " << rhs._billAssociatedInvoice;
    return os;
}
