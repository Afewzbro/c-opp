#include<iostream>
#include<stdlib.h>
#include<iomanip>
#include<time.h>
using namespace std;
enum Suit { clubs, diamonds, hearts, spades };
const int jack = 11;
const int queen = 12;
const int king = 13;
const int ace = 14;
class card{
    private : 
        int number;
        Suit suit;
    public :
        card(){}
        void set(int n, Suit s) //set card
            { suit = s; number = n; }
        void display(); 
};
void card::display(){
    if(number>=2 && number<=10){
        cout<<number;
    }
    else
        switch(number){
            case jack: cout << "J"; break;
            case queen: cout << "Q"; break;
            case king: cout << "K"; break;
            case ace: cout << "A"; break;
        }
    
    switch(suit){
            case clubs: cout << static_cast<char>(5); break;
            case diamonds: cout << static_cast<char>(4); break;
            case hearts: cout << static_cast<char>(3); break;
            case spades: cout << static_cast<char>(6); break;
    }
}
int main(){
    
    card deck[52];
    int j;
    cout << endl;
    for(j=0; j<52; j++){
        int num = (j % 13) + 2; //cycles through 2 to 14, 4 times
        Suit su = Suit(j / 13); //cycles through 0 to 3, 13 times
        deck[j].set(num, su); //set card
    }
    cout << "\nOrdered deck:\n";
    for(j=0; j<52; j++){
        deck[j].display();
        cout << " ";
        if( !( (j+1) % 13) ) //newline every 13 cards
            cout << endl;
    }
    srand( time(NULL) ); 
    for(j=0; j<52; j++){
        int k = rand() % 52; //pick another card at random
        card temp = deck[j]; //and swap them
        deck[j] = deck[k];
        deck[k] = temp;
    }
    cout << "\nShuffled deck:\n";
    for(j=0; j<52; j++){
        deck[j].display();
        cout << ", ";
        if( !( (j+1) % 13) ) //newline every 13 cards
            cout << endl;
    }
    return 0;
} //end main
