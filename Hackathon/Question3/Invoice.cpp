#include "Invoice.h"
#include "InvoiceType.h"

Invoice::Invoice(std::string invoiceNumber, InvoiceType type, int invoiceItem)
:_invoiceNumber(invoiceNumber),_type(type),_invoiceItem(invoiceItem)
{
}

std::ostream &operator<<(std::ostream &os, const Invoice &rhs) {
    os << "_invoiceNumber: " << rhs._invoiceNumber
       << " _type: " <<DisplayEnum(rhs._type)
       << " _invoiceItem: " << rhs._invoiceItem;
    return os;
}

std::string DisplayEnum(const InvoiceType type1)
{
    if(type1==InvoiceType::E_BILL){
        return "E_BILL";
    }else if(type1==InvoiceType::SMS_GENERATED){
        return "SMS_GENERATED";
    }else{
        return "PAPER_SLIP";
    }
}
