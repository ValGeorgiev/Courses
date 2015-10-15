#include <iostream>
#include "Cards.h"
using namespace std;

Card::Card(ranks _rank, suits _suit){
	rank = _rank;
	suit = _suit;
}
Card::~Card(){}
Card::Card(const Card& other){
	rank = other.rank;
	suit = other.suit;
}
Card& Card::operator=(const Card& other){
	if (this != &other){
		rank = other.rank;
		suit = other.suit;
	}
	return *this;
}
ranks Card::getRank()const{
	return rank;
}
suits Card::getSuit()const{
	return suit;
}
void Card::setRank(ranks _rank){
	rank = _rank;
}
void Card::setSuit(suits _suit){
	suit = _suit;
}
void Card::print()const{
	cout << "Card suit:  ";
	switch (suit){
		case Spade: cout << "Spade" << endl; break;
		case Diamond: cout << "Diamond" << endl; break;
		case Heart: cout << "Heart" << endl; break;
		case Club: cout << "Club" << endl; break;
	}
	cout << "Card rank: ";
	switch (rank){
	case Two: cout << "2" << endl; break;
	case Three: cout << "3" << endl; break; 
	case Four: cout << "4" << endl; break;
	case Five: cout << "5" << endl; break;
	case Six: cout << "6" << endl; break;
	case Seven: cout << "7" << endl; break;
	case Eight: cout << "8" << endl; break;
	case Nine: cout << "9" << endl; break;
	case Ten: cout << "10" << endl; break;
	case Valet: cout << 'J' << endl; break;
	case Dame: cout << 'D' << endl; break;
	case King: cout << 'K' << endl; break;
	case Ace: cout << 'A' << endl; break;
	}
}
bool Card::isEqual(const Card& other)const{
	return (rank == other.rank) && (suit == other.suit);
}

//int main(){
//	Card first(Ace, Club);
//	first.print();
//	Card second(Nine, Spade);
//	cout << second.isEqual(first) << endl;
//	return 0;
//}