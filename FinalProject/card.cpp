#include "card.hpp"
//Somewhat uncomfortable with member intializer list syntax
Card::Card(Rank r, Suit s) : m_rank(r), m_suit(s){};

//Really struggling to use this function to actually make the deck available
//in main. I interpret this function to return a Deck std::vector<Card> type
//intialized with the below values; 
Deck make_deck()
{
  return Deck {
  Card {Ace, Spades},
  Card {Two, Spades},
  Card {Three, Spades},
  Card {Four, Spades},
  Card {Five, Spades},
  Card {Six, Spades},
  Card {Seven, Spades},
  Card {Eight, Spades},
  Card {Nine, Spades},
  Card {Ten, Spades},
  Card {Jack, Spades},
  Card {Queen, Spades},
  Card {King, Spades},

  Card {Ace, Clubs},
  Card {Two, Clubs},
  Card {Three, Clubs},
  Card {Four, Clubs},
  Card {Five, Clubs},
  Card {Six, Clubs},
  Card {Seven, Clubs},
  Card {Eight, Clubs},
  Card {Nine, Clubs},
  Card {Ten, Clubs},
  Card {Jack, Clubs},
  Card {Queen, Clubs},
  Card {King, Clubs},

  Card {Ace, Diamonds},
  Card {Two, Diamonds},
  Card {Three, Diamonds},
  Card {Four, Diamonds},
  Card {Five, Diamonds},
  Card {Six, Diamonds},
  Card {Seven, Diamonds},
  Card {Eight, Diamonds},
  Card {Nine, Diamonds},
  Card {Ten, Diamonds},
  Card {Jack, Diamonds},
  Card {Queen, Diamonds},
  Card {King, Diamonds},

  Card {Ace, Hearts},
  Card {Two, Hearts},
  Card {Three, Hearts},
  Card {Four, Hearts},
  Card {Five, Hearts},
  Card {Six, Hearts},
  Card {Seven, Hearts},
  Card {Eight, Hearts},
  Card {Nine, Hearts},
  Card {Ten, Hearts},
  Card {Jack, Hearts},
  Card {Queen, Hearts},
  Card {King, Hearts}

  };
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

//prints the deck of cards
void print_deck(Deck deck){
  for(auto i : deck)
    std::cout << i << " "; 
  std::cout<<std::endl; 
}
//shuffles the deck of cards
void shuffle_deck(Deck& deck)
{
  srand(time(0));
  int deckSize = deck.size();
  for(int i = 0; i < deckSize*5; ++i)
  {
    std::swap(deck[i%deckSize], deck[rand()%deckSize]);
  }
}
void deal_deck(Deck const& deck, Deck& p1, Deck& p2)
{
  int deckSize = deck.size();
  for(int i = 0; i < deckSize; ++i)
  {
    p1.push_back(deck[i]);
    ++i; 
    p2.push_back(deck[i]);
  }
}
bool operator== (const Card &c1, const Card &c2){
  return(c1.m_rank == c2.m_rank);
}
bool operator < (const Card &c1, const Card &c2){
  return(c1.m_rank < c2.m_rank);
}
bool operator > (const Card &c1, const Card &c2){
  return(c1.m_rank > c2.m_rank);
}
//Overloaded operator implemented for the card class
std::ostream& operator<< (std::ostream& stream, const Card& card){
  switch(card.m_rank) {
    case Ace: stream <<"A";
      break; 
    case Two: stream <<"2";
      break; 
    case Three: stream <<"3";
      break; 
    case Four:  stream <<"4";
      break; 
    case Five:  stream <<"5";
      break; 
    case Six: stream <<"6";
      break; 
    case Seven: stream <<"7";
      break; 
    case Eight: stream <<"8";
      break; 
    case Nine: stream <<"9";
      break; 
    case Ten: stream <<"T";
      break; 
    case Jack: stream <<"J";
      break; 
    case Queen: stream <<"Q";
      break; 
    case King:  stream <<"K";
      break; 
  }
  switch(card.m_suit) {
    case Spades: stream << "\u2660";
      break;
    case Clubs: stream << "\u2663";
      break;
    case Diamonds: stream << "\u2662";
      break;
    case Hearts: stream << "\u2661";
      break;
  }
  return stream;
};