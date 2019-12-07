#include "CardDeck.h"

CardDeck::CardDeck() {
	size_t deck_i = 0;
	for (size_t ii = 0; ii < 4; ii++) {
		for (size_t i = 1; i < 14; ++i) {
			deck[deck_i] = Card(ii, i);
			deck_i++;
		}
	}
	for (int i = 0; i < 3; ++i) {
		deck[deck_i] = Card(69, 14);
		deck_i++;
	}
}

const Card* CardDeck::getDeck() const {
	return deck;
}