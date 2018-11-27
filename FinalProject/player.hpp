#ifndef PLAYER_HPP 
#define PLAYER_HPP

#include <vector>
#include <iostream>

class Player
{
public: 
  int getChipCount() {return chipStack;};
private:
  int chipStack;
};
/*
class Card
{
public:
  Card(Rank r, Suit s);
  Rank getRank () {return m_rank;};
  Suit getSuit () {return m_suit;};
  friend std::ostream& operator<< (std::ostream& stream, const Card& card);
  friend bool operator== (const Card &c1, const Card &c2);
  friend bool operator < (const Card &c1, const Card &c2);
  friend bool operator > (const Card &c1, const Card &c2);

private:
  Rank m_rank;
  Suit m_suit;
};

using Deck = std::vector<Card>;
Deck make_deck();
void print_deck(Deck);
void shuffle_deck(std::vector<Card>&);
void deal_deck(Deck const&, Deck&, Deck&);  
*/
#endif
