#ifndef GAME_HPP 
#define GAME_HPP
#include "player.hpp"
#include <vector>
#include <iostream>

class Game
{
public: 
  int getOpponents() {return opponents;};
  void setOpponents(int o) {opponents = o;};
  int getPot() {return pot;};
  void setPot(int p) {pot = p;};
  std::vector<Player> getPlayers(){ return players;}
  void setStartStack(int s){startStack = s;};
  int getStartStack() {return startStack;};
  int numOpponents();
private:
  int opponents;
  int startStack; 
  int pot;
  std::vector<Player> players; 
};
#endif
