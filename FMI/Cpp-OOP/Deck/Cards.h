#ifndef Cards_H
#define Cards_H

enum suits {
	Spade, Diamond, Heart, Club, endSuits
};
enum ranks{
	Two, Three, Four, Five, Six, Seven, Eight, Nine, Ten, Valet, Dame, King, Ace, endRanks
};

class Card{
private:
	ranks rank;
	suits suit;
public:
	Card(ranks = Two, suits = Spade);
	~Card();
	Card(const Card&);
	Card& operator=(const Card&);
	
	ranks getRank()const;
	suits getSuit()const;
	void setRank(ranks);
	void setSuit(suits);
	void print()const;
	bool isEqual(const Card&) const;
};

#endif
