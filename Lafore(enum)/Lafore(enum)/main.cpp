#include <iostream>
using namespace std;


const int jack = 11;
const int queen = 12;
const int king = 13;
const int ace = 14;


enum Suit{ clubs , diamonds ,hearts , spades};

struct Card{
    int card;
    Suit suit;
};


int main() {
   
    Card temp, chosen , prize;
  
    int position;
    
    Card card1 = {7 , clubs};
    cout << "Card1: 7 clubs" << endl;
    Card card2 = {jack,hearts};
    cout << "Card2: Jack hearts" << endl;
    Card card3 = {ace,spades};
    cout << "Card2: Ace spades" << endl;
    
    
    prize = card3;
    
    cout << "Change card1 and card3" << endl;
    temp = card3;
    card3 = card1;
    card1 = temp;
    
    cout << "Change card2 and card3" << endl;
    temp = card2;
    card2 = card3;
    card3 = temp;
   
    cout << "Change card1 and card2" << endl;
    temp = card2;
    card2 = card1;
    card1 = temp;
    
    
    cout <<"Which position Ace spades?(1-3)" << endl;
    
    cin >> position;
    
    switch (position) {
        case 1:
            chosen = card1;
            break;
        case 2:
            chosen = card2;
            break;
        case 3:
            chosen = card3;
            break;
        default:
            break;
    }
    
    
    if(chosen.card == prize.card && chosen.suit == chosen.suit ){
        cout << "Yeah! You are right!" << endl;
    }else{
        cout << "Nope" << endl;
    }
    
    
    return 0;
}
