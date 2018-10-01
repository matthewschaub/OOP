#include <iostream>
#include <vector>
#include "card.hpp"

const int numSuit = 4;
const int numRank = 13;

int main()
{
  Deck deck = make_deck();
  print_deck(deck);
  shuffle_deck(deck);
  print_deck(deck);

return 0; 
}


