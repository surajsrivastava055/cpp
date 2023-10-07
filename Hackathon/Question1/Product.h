#ifndef PRODUCT_H
#define PRODUCT_H

#include<iostream>
#include "ProductType.h"

class Product
{
private:
    std::string _productId;
    ProductType _type;
    float _produtPrice;
    std::string _productBrand;

public:
    Product(
        std::string productId,
        ProductType type,
        float produtPrice,
        std::string productBrand
        );
    ~Product() {
        std::cout<<"Product With ID :"<<productId()<<" is Destroyed\n";
    }

    std::string productId() const { return _productId; }
    void setProductId(const std::string &productId) { _productId = productId; }

    ProductType type() const { return _type; }
    void setType(const ProductType &type) { _type = type; }

    float produtPrice() const { return _produtPrice; }
    void setProdutPrice(float produtPrice) { _produtPrice = produtPrice; }

    std::string productBrand() const { return _productBrand; }
    void setProductBrand(const std::string &productBrand) { _productBrand = productBrand; }

    friend std::ostream &operator<<(std::ostream &os, const Product &rhs);

};
std::string DisplayEnum(const ProductType type);


#endif // PRODUCT_H
