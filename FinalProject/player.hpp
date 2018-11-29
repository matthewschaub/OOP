#ifndef PLAYER_HPP 
#define PLAYER_HPP
#include "card.hpp"
#include <vector>
#include <iostream>

class Player
{
public: 
  Player(int stack, std::string n, int i): chipStack(stack), name(n), id(i){}; 
  int getChipStack() {return chipStack;};
  void setChipStack(int v) {chipStack += v;};

  std::string getName() {return name;};
  void setName(std::string n) {name = n;};
  Deck getDeck(){return hand;};
  void pushBack(Card c){hand.push_back(c);};
  void printHand(){print_deck(hand);};
  void resetHand(){hand.clear();};

  int getId(){return id;};
  //check
  //bet
  //call
  //raise
  //fold
private:
	int id;
  int chipStack;
  Deck hand; 
  std::string name;
};
#endif
