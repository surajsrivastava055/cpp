#include<iostream>
#include "Product.h"

Product::Product(std::string productId, ProductType type, float produtPrice, std::string productBrand)
:_productId(productId),_type(type),_produtPrice(produtPrice),_productBrand(productBrand)
{
}
std::ostream &operator<<(std::ostream &os, const Product &rhs) {
    os << "_productId: " << rhs._productId
       << " _type: " << DisplayEnum(rhs._type)
       << " _produtPrice: " << rhs._produtPrice
       << " _productBrand: " << rhs._productBrand;
    return os;
}

std::string DisplayEnum(const ProductType type)
{
    if(type==ProductType::APPLIANCE){
        return "APPLIANCE";
    }else if(type==ProductType::PERFUME){
        return "PERFUME";
    }else{
        return "FMCG";
    }
}
