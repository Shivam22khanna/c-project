#include<iostream>
using namespace std;

const int clubs = 0;
const int dimonds = 1;
const int hearts = 2;               //suits
const int spades = 3;

const int jack = 11;
const int queen = 12;
const int king = 13;     //face cards
const int ace = 14;


struct card{
    int number;
    int suit;
};


int  main(){
    card temp,chosen,prize;
    int postion;

    cout<<"\n\n*************************************************************\n\n";

    card card1 = {7,clubs};
    cout<< "Card 1 is 7 of clubs\n";

    card card2 = {jack,hearts};
    cout<< "Card 2 is the jack of hearts\n";

    card card3 ={ace,spades};
    cout<< "Card 3 is the ace of spades\n";

    prize = card3;   //winning card

    cout<<"\nI'm swapping card 1 with card 3\n";
    temp = card3; card3 =card1; card1 = temp;

    cout<<"\nI'm swapping card 2 with card 3\n";
    temp = card2; card2 = card3; card3 = temp;

    cout<<"\nI'm swapping card 1 with card 3\n";
    temp = card1;  card1 = card3; card3 = temp;

    cout<<"\n\nNow where (1,2 or 3) is ace of spades ?\n\n";
    cout<<"\n\n*************************************************************\n\n";
    cin>>postion;
    

    switch(postion){
        case 1: chosen = card1; break;
        case 2: chosen = card2; break;
        case 3: chosen = card3; break;
    }
    if(chosen.number == prize.number && chosen.suit == prize.suit){
        cout<<"That's right! you win...\n";
    }
    else{
        cout<<"Sorry !you lose....\n";
    }

    return 0;
    
}


