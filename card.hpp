#ifndef CARD_HPP 
#define CARD_HPP

#include <vector>
#include <iostream>

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

class Card
{
public:
  Card(Rank r, Suit s);
  Rank getRank () {return m_rank;};
  Suit getSuit () {return m_suit;};
  friend std::ostream& operator<< (std::ostream& stream, const Card& card);

private:
  Rank m_rank;
  Suit m_suit;
};

using Deck = std::vector<Card>;
Deck make_deck();
void print_deck(Deck);
void shuffle_deck(std::vector<Card>&);  

#endif
