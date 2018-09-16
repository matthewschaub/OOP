#include <iostream>
#include <vector>

enum Suit
{
  Spades,
  Clubs,
  Diamonds,
  Hearts,
};

enum Rank
{
  Ace,
  Two,
  Three,
  Four,
  Five,
  Six,
  Seven,
  Eight,
  Nine,
  Ten,
  Jack,
  Queen,
  King,
};

struct Standard_card
{
  Suit suit;
  Rank rank;
};

const int numSuit = 4;
const int numRank = 13;

std::vector<Standard_card> newDeck(); 

int main()
{
  std::vector<Standard_card> Deck = newDeck(); 

return 0; 
}

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
