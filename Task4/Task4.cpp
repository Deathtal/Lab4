#include "CardDeck.h"
#include <iostream>

int main() {
	CardDeck Cdeck;

	for (int i = 0; i < 55; ++i) {
		std::cout << i+1 << ":\t";
		Cdeck.getDeck()[i].print();
	}
}