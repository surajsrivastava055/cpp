#include<iostream>
class DebitCard
{
private:
int _cvv_number;
std::string _card_number;

public:
        
        DebitCard( int cvv , std::string number)
        :_cvv_number(cvv), _card_number(number)
        {
            // this->_card_number=number;
            // this->_ccvv_number=cvv;
        }
   ~DebitCard(){
    std::cout<<"debit card destroyed";
   }
};


class Account {

private:
DebitCard* obj;
int _accountNumber;

public:
 Account( DebitCard* card, int acc)
 :obj(card), _accountNumber(acc)
 {
    // this->_accountNumber=acc;
    // this->obj= card;
 }
 ~Account(){
    std::cout<<"account gya";
 }
 friend std::ostream &operator<<(std::ostream &os, const Account &rhs) {
     os << "obj: " << rhs.obj
        << " _accountNumber: " << rhs._accountNumber;
     return os;
 }

};


/*
DebitCaard * card = new DebitCard();
DebitCard & c2 = card; alias

DebitCard&& c1 = std::move(card);
c1 is rvalue referenced of card




*/
 
int main(){
Account* ac = new Account( new DebitCard(781,"jbsf"),

2525335
 );

std::cout<<*ac;





}