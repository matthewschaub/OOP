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
void shuffle(std::vector<Standard_card>&);
void printDeck(std::vector<Standard_card>);

int main()
{
  std::vector<Standard_card> Deck = newDeck();
  printDeck(Deck);
  shuffle(Deck);
  printDeck(Deck);
  std::vector<Standard_card> player1;
  std::vector<Standard_card> player2;
  


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
void shuffle(std::vector<Standard_card>& v)
{
  srand(time(0));
  int deckSize = v.size();
  for(int i = 0; i < 1000; ++i)
  {
    std::swap(v[rand()%deckSize], v[rand()%deckSize]);
  }
}
void printDeck(std::vector<Standard_card> v)
{
  for(int i = 0; i < v.size(); ++i)
    std::cout<<v[i].suit<< " " <<v[i].rank <<std::endl; 
}
