//
//  Card.hpp
//  Lab1
//
//  Created by Alex Berthon on 8/29/16.
//  Copyright © 2016 Alex Berthon. All rights reserved.
//

#ifndef Card_hpp
#define Card_hpp

#include <stdio.h>

/*
 This class simulates a playing card, holds a value, and suit.
 */
class Card{
private:
    int value;
    char suit;
    
public:
    /*
     Default constructor
     */
    Card();
    
    /*
     Overloaded constructor
        @param v the value to assign to the card object, type int
        @param s the suit to assign to the card object, type char
     */
    Card(int v, char s);
    
    /*
     This function gets the current value of the card
     @return the value of the card
     */
    int getValue();
    
    /*
     This function prints the card object and formatts the output.
     */
    void displayCard();
};



#endif /* Card_hpp */
