//
//  CardDeck.hpp
//  Lab1
//
//  Created by Alex Berthon on 8/29/16.
//  Copyright © 2016 Alex Berthon. All rights reserved.
//

#ifndef CardDeck_hpp
#define CardDeck_hpp

#include <stdio.h>


class CardDeck{
private:
    Card deck [52];
public:
    /*
     This function deals the top card in the deck
     @return the value of the top card, type int
     */
    int deal();
    
    /*
     This function returns the number of cards left in the deck
     @return the number of cards left, type int
     */
    int cardsLeft();
    
    /*
     This function shuffles the deck by randomly switching elements in the array
     */
    void shuffle();
    
    /*
     The default constructor
     */
    CardDeck();
    
    /*
     This function displays the card at the given index in the array
     @param n the index, type int.
     */
    void displayCardAt(int n);
};


#endif /* CardDeck_hpp */
