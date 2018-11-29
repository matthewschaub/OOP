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

  int getDealer() {return dealer;};
  void setDealer(int d) {dealer = d;};
  void advanceDeal(){dealer = (dealer + 1) % player.size();}; 
  //TODO: highcarddeals

  int getPot() {return pot;};
  void setPot(int p) {pot = p;};

  std::vector<Player> getPlayers(){ return players;}
  void pushBack(Player p){players.push_back(p);};

  void displayChipCounts(); 
  
  
  

  int getPlayerChips(int i) {return players[i].getChipStack();};
  void setPlayerChips(int i, int val) { players[i].setChipStack(val);};


  //split pot
  //flop
  //turn & river
  //burn
  //deal takes an int as parameter int represents who is the dealer. 
  //blinds same as deal int as parameter 
  //blind levels
  //dealer
  //win hand

  
 
private:
  int opponents;
  int startStack; 
  int dealer;
  int smallBlind = 5;  
  int pot;
  std::vector<Player> players; 
};
#endif
