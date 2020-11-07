#include <iostream>

class Player
{
private:
    std::string name;
    int health, xp;

public:
    // Overloaded Constructors
    // overloaded constructors to avoid garbage value and compiler errors too

    /*
!   The Old Way (Inefficient ):

    Player()
    {
        name = "null";
        health = 0;
        xp = 0;
    }

    Player(std::string txt)
    {
        name = txt;
        health = 0;
        xp = 0;
    }
    Player(std::string txt, int h)
    {
        name = txt;
        health = h;
        xp = 0;
    }
    Player(std::string txt, int h, int x)
    {
        name = txt;
        health = h;
        xp = x;
    }
    */

    // * The New Way: (Here we are 'initializing' and not 'assigning') :

    Player() : name{"none"}, health{0}, xp{0} {}

    Player(std::string txt) : name{txt}, health{0}, xp{0} {}

    Player(std::string txt, int h) : name{txt}, health{h}, xp{0} {}

    Player(std::string txt, int h, int x) : name{txt}, health{h}, xp{x} {}

    // Methods

    void setName(std::string givName)
    {
        name = givName;
    }

    std::string getName()
    {
        return name;
    }

    int getHealth() { return health; }
    int getXp() { return xp; }
};

int main(void)
{
    Player joseph;

    Player mark{"Mark Hamilton", 100, 98};
    std::cout << mark.getName() << std::endl;
    std::cout << mark.getHealth() << std::endl;
    std::cout << mark.getXp() << std::endl;

    Player john{"John Doe", 89, 97};
    std::cout << john.getName() << std::endl;
    std::cout << john.getHealth() << std::endl;
    std::cout << john.getXp() << std::endl;

    return 0;
}