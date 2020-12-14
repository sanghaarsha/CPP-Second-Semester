#include <iostream>
#include <string>

class Player
{
private:
    std::string name;
    int health, xp;

public:
    std::string getName() { return name; }
    int getHealth() { return health; }
    int getXp() { return xp; }

    Player(std::string nameVal = "None", int hVal = 0, int xVal = 0);

    // Copy Constructor Declaration
    Player(const Player &source);

    // Destructor of Copy Constructor
    ~Player()
    {
        std::cout << "Destructor called for: " << name << std::endl;
    };
};

Player::Player(std::string nameVal, int hVal, int xVal) : name{nameVal}, health{hVal}, xp{xVal}
{
    std::cout << "Three args constructor called for: " << name << std::endl;
};

// Copy Constructor Defination
Player::Player(const Player &source) : name(source.name), health(source.health), xp(source.xp)
{
    std::cout << "Copy constructor - made copy of: " << source.name << std::endl;
};

// Lets make use of copy constructor
void displayPlayer(Player p)
{
    std::cout << "Name: " << p.getName() << std::endl;
    std::cout << "Health: " << p.getHealth() << std::endl;
    std::cout << "XP: " << p.getXp() << std::endl;
}

int main(void)
{
    Player empty;
    displayPlayer(empty);

    Player frank{"Frank"};
    // displayPlayer(frank);

    Player hero{"Hero", 90};
    // displayPlayer(hero);

    Player villian{"Villian", 100, 25};
    // displayPlayer(villian);

    return 0;
}