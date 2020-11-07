#include <iostream>

class Player
{
private:
    std::string name;
    int health, xp;

public:
    // Overloaded Constructors
    Player()
    {
        name = "none";
        health = 100;
        xp = 0;
    }
    Player(std::string txt)
    {
        name = txt;
    }
    Player(std::string txt, int h, int x)
    {
        name = txt;
        health = h;
        xp = x;
    }

    // Its best to overload constructors with all possible arguments,
    // for avoiding garbage data

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
    Player mark;
    mark.setName("Mark Hamilton");
    std::cout << mark.getName() << std::endl;
    std::cout << mark.getHealth() << std::endl;
    std::cout << mark.getXp() << std::endl;

    Player john{"John Doe", 89, 97};
    std::cout << john.getName() << std::endl;
    std::cout << john.getHealth() << std::endl;
    std::cout << john.getXp() << std::endl;

    return 0;
}