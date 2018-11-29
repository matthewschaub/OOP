#include <iostream>
#include <vector>
#include "card.hpp"
#include "game.hpp"
#include "player.hpp"

void initializeGame(Game&);

int main()
{
  Game g; 
  initializeGame(g); 
  Deck deck = make_deck();
  shuffle_deck(deck);
 /*
  for(int i = 0; i < g.getOpponents() + 1; ++i){
  	g.postBlinds();
  	g.displayChipCounts(); 
  	g.advanceDeal(); 
  }*/

  for(int i = 0; i < g.getOpponents() + 1; ++i){
  	g.deal(g.getDealer());
  	g.printHands(); 
  	g.advanceDeal(); 
  	std::cout << std::endl; 
  	//g.postBlinds();
  	//g.displayChipCounts(); 
  	//g.advanceDeal(); 
  }
  //g.setPlayerChips(3, -1500);
/*
  for(int i = 0; i < 20; ++i){
  	if(g.getPlayerChips(g.getDealer()) <= 1)
  		g.setDealer((g.getDealer() + 1)%(g.getOpponents() + 1)); 
  	else{
	  	std::cout << "Player " << g.getDealer() + 1 << " is the dealer" << std::endl;
	  	g.setDealer((g.getDealer() + 1)%(g.getOpponents() + 1));
	  }
  }
  */






  
return 0; 
}
void initializeGame(Game& g){
	g.setOpponents(g.numOpponents());
  g.setStartStack(g.numStartStack());
  g.setDealer(0);
  for(int i = 0; i <= g.getOpponents(); ++i){
  	g.pushBack(Player(g.getStartStack(), "Player " + std::to_string(i + 1), i));
  }
  g.displayChipCounts(); 
}
