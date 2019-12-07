#pragma once

class Card {
private:
	enum class suits {clubs, diamonds, hearts, spades};
	suits suit;
	int rank;
public:
	Card();

	Card(int nSuit, int nRank);

	const float set(int nSuit, int nRank) {
		suit = static_cast<suits>(nSuit);
		rank = nRank;
	}

	const void print() const;
};