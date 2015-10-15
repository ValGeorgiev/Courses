#include <iostream>
#include "Deck.h"
using namespace std;

Deck::Deck(){
	top = maxCapacity;
	int p = 0;
	cards = new Card[maxCapacity];
	for (suits i = Spade; i < endSuits; i = suits(i + 1)){
		for (ranks j = Two; j < endRanks; j = ranks(j + 1)){
			cards[p] = Card(j, i);
			p++;
		}
	}
}
Deck::~Deck(){
	delete[]cards;
}
Deck::Deck(const Deck& other){
	top = other.top;
	cards = new Card[maxCapacity];
	for (int i = 0; i < top; i++){
		cards[i] = other.cards[i];
	}
}
Deck& Deck::operator=(const Deck& other){
	if (this != &other){
		delete[]cards;
		top = other.top;
		cards = new Card[maxCapacity];
		for (int i = 0; i < top; i++){
			cards[i] = other.cards[i];
		}
	}
	return *this;
}
void Deck::print()const{
	for (int i = 0; i < top; i++){
		cards[i].print();
	}
}
bool Deck::isEmpty()const{
	return top == 0;
}
Card& Deck::giveCard(){
	if (!isEmpty()){
		return cards[top--];
	}
}
void Deck::mixDeck(){
	for (int i = top - 1; i > 0; --i)
	{
		swap(cards[i], cards[rand() % (i + 1)]);
	}
}

int main(){

	Deck p;
	p.print();
	cout << "------------------------------------------" << endl;
	p.mixDeck();
	p.print();
	return 0;
}