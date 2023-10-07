#ifndef BILL_H
#define BILL_H
#include "Invoice.h"
#include <ostream>

class Bill
{
private:
    float _billAmount;
    float _billTaxAmount;
    Invoice* _billAssociatedInvoice;
public:
    Bill(
        float billAmount,
        float billTaxAmount,
        Invoice* billAssociatedInvoice
        );
    ~Bill() {
        std::cout<<"Bill Object is Destroyed\n";
    }

    float billAmount() const { return _billAmount; }
    void setBillAmount(float billAmount) { _billAmount = billAmount; }

    float billTaxAmount() const { return _billTaxAmount; }
    void setBillTaxAmount(float billTaxAmount) { _billTaxAmount = billTaxAmount; }

    Invoice* billAssociatedInvoice() const { return _billAssociatedInvoice; }
    void setBillAssociatedInvoice(Invoice* billAssociatedInvoice) { _billAssociatedInvoice = billAssociatedInvoice; }

    friend std::ostream &operator<<(std::ostream &os, const Bill &rhs);
    
};

#endif // BILL_H
