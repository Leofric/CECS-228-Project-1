//
//  CardDeck.cpp
//  Lab1
//
//  Created by Alex Berthon on 8/29/16.
//  Copyright © 2016 Alex Berthon. All rights reserved.
//
#include "Card.cpp"

class CardDeck{
private:
    Card deck [52];
public:
    int deal( ){
        int i = 0;
        while(deck[i].getValue()==0){ //skips over empty(removed) elements
            i++;
        }
        int value = deck[i].getValue();
        deck[i].displayCard();
        deck[i] = Card();
        
        if (value > 10){ //any card 10 or higher have the same value of 10 par game rules
            value = 10;
        }
        return value;
    }
    
    int cardsLeft( ){
        int cards = 0;
        for (int i = 0; i<52; i++){
            if(deck[i].getValue()==0){
                cards++;
            }
        }
        cards = 52-cards;
        return cards;
    }
    
    void shuffle(){
        srand((unsigned)time(0));
        
        for (int i = 0; i<52; i++){
            int rng = (rand()%52);
            Card placeholder = deck[i];
            deck[i] = deck[rng];
            deck[rng] = placeholder;
        }
    }
    
    CardDeck(){
        for(int i = 0; i<13; i++){
            for(int j =0; j<4; j++){
                
                char suit = 'h';
                switch(j){
                    case 0:
                        suit = 'h';
                        break;
                    case 1:
                        suit = 's';
                        break;
                    case 2:
                        suit = 'c';
                        break;
                    case 3:
                        suit = 'd';
                        break;
                }
                deck [4*i+j] = Card(i+1, suit);
            }
        }
    }
    void displayCardAt(int n){
        Card aCard = deck[n];
        aCard.displayCard();
    }
};
