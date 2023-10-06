#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H
#define SIZE 5

#include<iostream>
#include "Card.h"

/*
    A function to check if all pointers in the container is nullptr
*/
    bool CheckNull(Card* arr[SIZE]);
/*
    create 5 objects 2 of DebitCard and 3 of creditCard on heap.
*/
    void CreateObjects(Card* arr[SIZE]);

/*
    return an array of card pointers for those Cards whose _issuer matches the second Parameter.
*/   

    Card** MatchingIssuerCards(Card* arr[5],CardType type,Card* res[SIZE]);
/*
    return pointer to the array of card with highest _annual_charge.
*/

    Card* FindingCardMatchesWithNumber(Card* arr[5],int number);

/*
    return the_cvv number of the card whose __annual_charge is the highest 
*/
    int HighestChargeCard(Card* arr[5]);


#endif // FUNCTIONALITIES_H
