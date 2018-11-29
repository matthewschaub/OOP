#ifndef PLAYER_HPP 
#define PLAYER_HPP
#include "card.hpp"
#include <vector>
#include <iostream>

class Player
{
public: 
  Player(int stack, std::string n) : chipStack(stack), name(n){}; 
  int getChipStack() {return chipStack;};
  void setChipStack(int v) {chipStack += v;};

  std::string getName() {return name;};
  void setName(std::string n) {name = n;};
  //check
  //bet
  //call
  //raise
  //fold
private:
  int chipStack;
  Deck deck; 
  std::string name;
};
#endif
