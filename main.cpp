#include <iostream>
#include <vector>
#include "card.hpp"

const int numSuit = 4;
const int numRank = 13;

void shuffle(std::vector<Card>&);

int main()
{
  Deck deck = make_deck();
  //Would ideally like to do range based for loop on this vector but do
  //not fully understand the syntax to implement
  print_deck(deck);
  shuffle(deck);
  std::cout << "\nshuffled\n" << std::endl; 
  print_deck(deck);
  deck = make_deck(); 
  std::cout << "\nnew\n" << std::endl; 
  print_deck(deck);
  //printDeck(deck);
  //std::vector<Standard_card> player1;
  //std::vector<Standard_card> player2;
  


return 0; 
}
void shuffle(Deck& v)
{
  srand(time(0));
  int deckSize = v.size();
  for(int i = 0; i < 1000; ++i)
  {
    std::swap(v[rand()%deckSize], v[rand()%deckSize]);
  }
}

/* Irrelevant after class discussion on how to intialize deck 
std::vector<Standard_card> newDeck()
{
  std::vector<Standard_card> Deck; 
  
  int counter = 0; 
  for (int i = 0; i < numSuit; ++i)
  {
    for (int j = 0; j < numRank; ++j)
    {
      Standard_card c;
      c.suit = static_cast<Suit> (i);
      c.rank = static_cast<Rank> (j);
      Deck.push_back(c);
      counter++; 
    }
  }
  return Deck; 
}
*/
