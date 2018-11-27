#include <iostream>
#include <vector>
#include "card.hpp"
#include "game.hpp"
#include "player.hpp"

int main()
{
  Deck deck = make_deck();
  shuffle_deck(deck);
  
  Game g; 
  int numOp = g.numOpponents(); 
  g.setOpponents(numOp);



  
return 0; 
}

