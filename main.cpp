#include <iostream>
#include <vector>
#include "card.hpp"

const int numSuit = 4;
const int numRank = 13;

int main()
{
  Deck deck = make_deck();
  Deck p1, p2; 
  shuffle_deck(deck);
  deal_deck(deck, p1, p2);
  
return 0; 
}
