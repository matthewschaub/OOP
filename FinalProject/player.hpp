#ifndef PLAYER_HPP 
#define PLAYER_HPP
#include "card.hpp"
#include <vector>
#include <iostream>

class Player
{
public: 
  Player(int stack) : chipStack(stack){}; 
  int getChipCount() {return chipStack;};
  //check
  //bet
  //call
  //raise
  //fold
private:
  int chipStack;
  Deck deck; 
};
#endif
