#include <iostream>
#include <vector>
#include "card.hpp"


int equal_compare(int, Deck&, Deck&);

int main()
{
  Deck deck = make_deck();
  Deck p1, p2; 
  shuffle_deck(deck);
  deal_deck(deck, p1, p2);
  
  int i = 0;
  bool gameOver = false; 
  do{
    if(i > p1.size() || i > p2.size())
    {
      gameOver = true;
      break; 
    }
    else{
      if(p1[i] == p2[i]){
        i = equal_compare(i, p1, p2); 
      }
      else if(p1[i] > p2[i]){
        p1.push_back(p1[i]);
        p1.push_back(p2[i]);
        ++i; 
      }
      else{
        p2.push_back(p2[i]);
        p2.push_back(p1[i]);
        ++i; 
      } 
    }
  }
  while(!gameOver);
  std::cout << "Turns: " << i << std::endl; 
  if(p1.size() > p2.size())
    std::cout << "Player 1 wins" << std::endl;
  else
    std::cout << "Player 2 wins" <<std::endl;
  
return 0; 
}
void compare_card(int i, Deck& p1, Deck& p2){

}
int equal_compare(int i, Deck& p1, Deck& p2){
  int j = 1; 
  if(i+j > p1.size() || i+j > p2.size())
  {
    std::cout << "scenario to be defined";
  }
  while(p1[i+j] == p2[i+j])
    j++; 
  if(p1[i+j] > p2[i+j]){
    for(int x = j; x > 0; --x){
      p1.push_back(p1[i-j]);
      p1.push_back(p2[i-j]);
    }
  }
  else{
    for(int x = j; x > 0; --x){
      p2.push_back(p2[i-j]); 
      p2.push_back(p1[i-j]);
    }  
  }
  return i+j; 
}










