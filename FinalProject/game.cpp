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
            std::cout << std::endl; 
            return c;
    }
}
void Game::displayChipCounts(){
    std::cout << "Chip counts: " << std::endl; 
    int j = 1; 
    for (auto i : players){
        std::cout << "Player " << j << ' ' << i.getChipCount() << std::endl; 
        ++j;
    }
    std::cout << '\n';
}