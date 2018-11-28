#include <iostream>
#include <vector>
#include "card.hpp"
#include "game.hpp"
#include "player.hpp"

int main()
{
  Deck deck = make_deck();
  Deck p1, p2; 
  shuffle_deck(deck);
  deal_deck(deck, p1, p2);
  Game g; 
  int x = g.numOpponents(); 
  g.setOpponents(2); 

  
return 0; 
}

