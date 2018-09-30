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

using Deck = std::vector<Card>;