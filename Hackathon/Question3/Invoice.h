#ifndef INVOICE_H
#define INVOICE_H

#include<iostream>
#include "InvoiceType.h"

class Invoice
{
private:
    std::string _invoiceNumber;
    InvoiceType _type;
    int _invoiceItem;
public:
    Invoice(
        std::string invoiceNumber,
        InvoiceType type,
        int invoiceItem
        );
    ~Invoice() {
        std::cout<<"Invoice with ID :"<<invoiceNumber()<<" is Destroyed \n";
    }

    std::string invoiceNumber() const { return _invoiceNumber; }
    void setInvoiceNumber(const std::string &invoiceNumber) { _invoiceNumber = invoiceNumber; }

    InvoiceType type() const { return _type; }
    void setType(const InvoiceType &type) { _type = type; }

    int invoiceItem() const { return _invoiceItem; }
    void setInvoiceItem(int invoiceItem) { _invoiceItem = invoiceItem; }

    friend std::ostream &operator<<(std::ostream &os, const Invoice &rhs);

};

std::string DisplayEnum(const InvoiceType type1);

#endif // INVOICE_H
