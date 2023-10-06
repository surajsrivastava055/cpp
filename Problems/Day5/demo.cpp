#include<iostream>

float square(float number)
{
    return number*number;
}

float percentage(float number, float pct_factor){
    return number*(pct_factor/100);
}

float cube(float number){
    return number*number*number;
}

int Factorial(int number){
    if(number==1 || number==0){
        return 1;
    }
    if(number<0){
        throw std::runtime_error("Negative number problem");
    }
    else {
        return number*Factorial(number-1);
    }
}

void SwitchMenu(){

        while(true){

            int choice=0;
            float number;
            std::cout<<"Enter a number:";
            std::cin>>number;
            std::cout<<"Enter 1 for square\n 2 forCube \n 3 for Factorial\n 4 for exit";
            std::cin>>choice;

            switch(choice){

                case 1:
                    square(number);
                    break;

                case 2:
                    cube(number);
                    break;

                case 3:
                    //Factorial((int)number); //Explicit type casting! //OR.
                    try{
                    Factorial(static_cast<int>(number)); //Explicit compile time type casting!
                    }
                    catch(std::runtime_error &d){
                        std::cout<<d.what()<<"\n";
                    }
                    break;
                    
                case 4:
                    exit(0);   //exiting with 0 error. 

                default:
                    std::cout<<"Please try again";

            }
        }
}

int main(){

    SwitchMenu();
    
}

