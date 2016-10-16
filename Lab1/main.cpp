//
//  main.cpp
//  Lab1
//
//  Created by Alex Berthon on 8/29/16.
//  Copyright © 2016 Alex Berthon. All rights reserved.
//

#include "CardDeck.cpp"

void playGame(CardDeck deck);

int main(int argc, const char * argv[]) {
    CardDeck myDeck = CardDeck();
    bool run = 1;
    cout<<"Welcome to WAR!"<<endl;
    
    while(run){
            int choice = 0;
            cout<<endl;
            cout<<"Press 1 to get a new Deck!"<<endl;
            cout<<"Press 2 to show all cards in the Deck"<<endl;
            cout<<"Press 3 to shuffle the deck"<<endl;
            cout<<"Press 4 to PLAY WAR!"<<endl;
            cout<<"Press 5 to quit"<<endl;
            cin>>choice;
            switch (choice){
                case 1:
                    myDeck = CardDeck();
                    cout<<"A new deck has been created"<<endl;
                    break;
                case 2:
                    for(int i = 0; i<52; i++){
                        myDeck.displayCardAt(i);
                    }
                    break;
                case 3:
                    myDeck.shuffle();
                    cout<<"The Deck has been shuffled."<<endl;
                    break;
                case 4:
                    playGame(myDeck);
                    break;
                case 5:
                    run = 0;
                    cout<<"Goodbye"<<endl;
                    break;
            }
    }

    return 0;
}

void playGame(CardDeck deck){
    int play = 1;
    int playerScore;
    int computerScore;
    char choice = 'Y';
    cout<<"Prepare to play WAR!"<<endl;
    cout<<"There are "<<deck.cardsLeft()<<"cards left"<<endl;
    while(play){
        playerScore = 0;
        computerScore = 0;
        cout<<"...dealing..."<<endl;
        cout<<"One for you ~ ";
        playerScore+=deck.deal();
        cout<<"One for me ~ ";
        computerScore+=deck.deal();
        cout<<"Two for you ~ ";
        playerScore+=deck.deal();
        cout<<"Two for me ~ ";
        computerScore+=deck.deal();
        cout<<"You have "<<playerScore<<" points"<<endl;
        cout<<"I have "<<computerScore<<" points"<< endl;
        if (playerScore == computerScore){
            cout<<"Tie Game - I challenge you again";
        }
        else if(playerScore > computerScore){
            cout<<"You Win!!"<<endl;
        }
        else cout<<"In your face i win!"<<endl;
        cout<<"There are "<<deck.cardsLeft()<<"cards left"<<endl;
        cout<<"Wanna play again? (Y/N) "<<endl;
        cin>>choice;
        if (choice == 'n' | choice == 'N'){
            play = 0;
            cout<<"Goodbye!"<<endl;
        }
    }
}


