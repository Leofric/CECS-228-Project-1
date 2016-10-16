//
//  Card.cpp
//  Lab1
//
//  Created by Alex Berthon on 8/29/16.
//  Copyright © 2016 Alex Berthon. All rights reserved.
//
#include <iostream>
using namespace std;

class Card {
private:
    int value;
    char suit;
    
public:
    Card(){
        value = 0;
        suit = 'X'; //placeholder
    }

    Card(int v, char s){
        value = v;
        suit = s;
    }
    
    int getValue(){
        return value;
    }
   
    void displayCard(){
        switch(value){
            case 1:
                std::cout<<"Ace";
                break;
            case 11:
                std::cout<<"Jack";
                break;
            case 12:
                std::cout<<"Queen";
                break;
            case 13:
                std::cout<<"King";
                break;
        }
        if(value == 1 | value == 11 | value == 12 | value == 13){
        switch(suit){
            case 'h':
                std::cout <<" of Hearts"<< std::endl;
                break;
            case 's':
                std::cout <<" of Spades"<< std::endl;
                break;
            case 'c':
                std::cout <<" of Clubs"<< std::endl;
                break;
            case 'd':
                std::cout <<" of Diamonds"<< std::endl;
                break;
        }
        }
        else{
            switch(suit){
                case 'h':
                    std::cout<<value<<" of Hearts"<< std::endl;
                    break;
                case 's':
                    std::cout<<value<<" of Spades"<< std::endl;
                    break;
                case 'c':
                    std::cout<<value<<" of Clubs"<< std::endl;
                    break;
                case 'd':
                    std::cout<<value<<" of Diamonds"<< std::endl;
                    break;
            }
        }
    }
};
