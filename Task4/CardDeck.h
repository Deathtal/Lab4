#pragma once
#include "Card.h"

class CardDeck : public Card {
private:
	Card deck[69];
public:
	CardDeck();

	const Card* getDeck() const;
};