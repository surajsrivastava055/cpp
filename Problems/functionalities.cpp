#include<iostream>
#include <vector>
#include "Car.cpp"

 std::vector<Car>  carInstanceType(float threshold, std::vector<Car> list){
    
 std::vector<Car> returnedList;
for(Car c: list)
{
    if(c._vehicleInsurance._insuranceAmount>threshold)
    {
    returnedList.push_back(c);
    }
}
return returnedList;

}