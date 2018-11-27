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
