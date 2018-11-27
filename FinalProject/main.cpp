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
  g.setStartStack(g.numStartStack());

  for(int i = 0; i <= g.getOpponents(); ++i){
  	g.players.push_back(Player(g.getStartStack())); 
  }



  
return 0; 
}

