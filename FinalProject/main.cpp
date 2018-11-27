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
  g.setOpponents(g.numOpponents());

  for(int i = 0; i <= numOp; ++i){
  	g.player.push_back(Player(g.st)); 
  }



  
return 0; 
}

