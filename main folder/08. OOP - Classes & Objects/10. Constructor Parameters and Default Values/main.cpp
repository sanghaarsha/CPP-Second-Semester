#include <iostream>
#include <string>

class Player
{
private:
    std::string name;
    int health, xp;

public:
    // Constructor with default parameter values
    Player(std::string nameVal = "None", int healthVal = 0, int xpVal = 0);
};

// Delegated Constructor
Player::Player(std::string nameValue, int healthValue, int xpValue)
    : name{nameValue}, health{healthValue}, xp{xpValue}
{
    std::cout << "Used Three Args Delegated Constructor." << std::endl;
}

int main(void)
{
    
    Player empty;
    Player frank{"Frank"};
    Player hero{"Hero", 100};
    Player enemy{"Enemy", 100, 75};

    return 0;
}