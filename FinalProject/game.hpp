#ifndef GAME_HPP 
#define GAME_HPP
#include "player.hpp"
#include <vector>
#include <iostream>
#include <limits>

class Game
{
public: 
  int getOpponents() {return opponents;};
  void setOpponents(int o) {opponents = o;};
  int numOpponents();

  int getStartStack() {return startStack;};
  void setStartStack(int s){startStack = s;};
  int numStartStack();

  int getPot() {return pot;};
  void setPot(int p) {pot = p;};

  std::vector<Player> getPlayers(){ return players;}
  void pushBack(Player p){players.push_back(p);};

  void displayChipCounts(); 

  
 
private:
  int opponents;
  int startStack; 
  int pot;
  std::vector<Player> players; 
};
#endif
