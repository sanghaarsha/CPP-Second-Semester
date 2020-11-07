#include <iostream>
#include <string>

class Player
{
private:
    std::string name;
    int health, xp;

public:
    void setName(std::string text)
    {
        name = text;
    }

    // Overloaded Constructors
    Player()
    {
        std::cout << "No args constructor called." << std::endl;
    }
    Player(std::string name)
    {
        std::cout << "String arg constructor called." << std::endl;
    }
    Player(std::string name, int health, int xp)
    {
        std::cout << "Three args constructor called." << std::endl;
    }
    // Destructor
    ~Player()
    {
        std::cout << "Destructor called for: " << name << std::endl;
    }
};

int main(void)
{
    {
        Player slayer;
        slayer.setName("Slayer");
    }

    std::cout << "\n";

    {
        Player frank;
        frank.setName("Frank");

        Player hero("Hero");
        hero.setName("Hero");

        Player villian("Villian", 100, 87);
        villian.setName("Villian");
    }

    // Notice in the output, order of destruction is in reverse to that of construction
    // Destruction goes from bottom to top

    std::cout << "\n";

    Player *enemy = new Player();
    enemy->setName("Enemy");

    delete enemy;

    return 0;
}
