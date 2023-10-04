#include<iostream>

class Complex{
    private:
        float _real;
        float _imag;
    public:
        Complex(float real,float imag)
        :_real(real),_imag(imag)
        {

        }
        ~Complex(){
            std::cout<<"Object Destroyed\n";
        }

        Complex operator+(Complex n2){
            float r=this->_real+n2._real;
            float i=this->_real+n2._real;

            Complex temp(r,i);
            return temp;
        }

        // friend function is a function that is not a member of a class but still has 
        // access to private data or private attribute of class.
        friend std::ostream &operator<<(std::ostream &os, const Complex &rhs) {
            os << "_real: " << rhs._real
            << " _imag: " << rhs._imag;
            return os;
        }

        

};


