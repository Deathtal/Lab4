#include "Card.h"
#include <iostream>
#include <string>

Card::Card() : rank(), suit() {}

Card::Card(int nSuit, int nRank) : suit(static_cast<suits>(nSuit)), rank(nRank) {}

const void Card::print() const {
	std::string suit_s;
	std::string rank_s;

	switch (suit) {
	case Card::suits::clubs:
		suit_s = "Clubs";
		break;
	case Card::suits::diamonds:
		suit_s = "Diamonds";
		break;
	case Card::suits::hearts:
		suit_s = "Hearts";
		break;
	case Card::suits::spades:
		suit_s = "Spades";
		break;
	default:
		suit_s = "None";
		break;
	}

	switch (rank) {
	case 1:
		rank_s = "Ace";
		break;
	case 11:
		rank_s = "Jack";
		break;
	case 12:
		rank_s = "Queen";
		break;
	case 13:
		rank_s = "King";
		break;
	case 14:
		rank_s = "Joker";
		break;
	default:
		rank_s = std::to_string(rank);
		break;
	}

	std::cout << "Suit: " << suit_s << "\tRank: " << rank_s << std::endl;
}