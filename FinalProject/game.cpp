#include "game.hpp"

int Game::numOpponents()
{
    int o;
    while(true) // post test loop
    {
        std::cout <<"Enter the number of opponents (1-9): "; 
        std::cin >> o; 
        if((std::cin.fail()) || (o < 1) || (o > 9))
        {
            std::cout << "Invalid entry, try again" << std::endl;  
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
        }
        else
            return o;
    }
}
int Game::numStartStack()
{
    int c;
    while(true) // post test loop
    {
        std::cout <<"Enter starting chip stack (100-10000): "; 
        std::cin >> c; 
        if((std::cin.fail()) || (c < 100) || (c > 10000))
        {
            std::cout << "Invalid entry, try again" << std::endl;  
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
        }
        else
            return c;
    }
}
void Game::displayChipCounts(){
    std::cout << "Chip counts: " << std::endl; 
    int j = 1; 
    for (auto i : players){
        std::cout << i.getName()<< ": " << i.getChipStack() << std::endl; 
        ++j;
    }
    std::cout << '\n';
}
void Game::postBlinds(){
    pot += smallBlind * 3; 
    players[(dealer + 1)%players.size()].setChipStack(-smallBlind);
    players[(dealer + 2)%players.size()].setChipStack(-(smallBlind + smallBlind));
}
void Game::eliminate(){
     for (int i = 0; i < players.size(); ++i){
        if(players[i].getChipStack() <= 0){
            players.erase(players.begin() + i);
            --i; 
        }
    }
}
void Game::deal(int d){
    shuffle_deck(deck);
    for (int i = 0; i < players.size(); ++i)
        players[i].resetHand(); 
    int j = players.size() * 2; 
    for(int i = d; i < j + d; ++i){
        players[i%players.size()].pushBack(deck[i-d]);
    }
    board = {deck[j+1],deck[j+2], deck[j+3], deck[j+5], deck[j+7]};
}

void Game::printHands(){
    for (auto i : players){
        i.printHand(); 
    }
}









