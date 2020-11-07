#include <iostream>
#include <string>

class Player
{
private:
    std::string name;
    int health, xp;

public:
    // Overloaded Constructors
    // Initialization of these constructor are below the class
    Player();
    Player(std::string txt);
    Player(std::string txt, int healthValue);
    Player(std::string txt, int healthValue, int xpValue);
};

// Initialization By Using Delegating Constructors :

// First a delegating constructor is created:
Player::Player(std::string nameValue, int healthValue, int xpValue)
    : name{nameValue}, health{healthValue}, xp{xpValue}
{
    std::cout << "Used Three Args Delegated Constructor." << std::endl;
}

// Other constructors will call delegating constructor and initialze the values
Player::Player()
    : Player{"None", 0, 0}
{
    std::cout << "Used No Args Constructor." << std::endl;
}

Player::Player(std::string nameValue)
    : Player{nameValue, 0, 0}
{
    std::cout << "Used Single Arg Constructor." << std::endl;
}

Player::Player(std::string nameValue, int healthValue)
    : Player{nameValue, healthValue, 0}
{
    std::cout << "Used Two Args Constructor" << std::endl;
}

// We can notice code is less duplicated and more re-used

int main(void)
{

    Player empty;
    Player frank{"Frank Cash"};
    Player villian{"Villain", 100, 55};

    return 0;
}

// cd $dir && gcc $fileName -o $fileNameWithoutExt && $dir$fileNameWithoutExt