#include <iostream>
#include <string>
class Player
{
private:
    std::string name;
    int health, xp;

public:
    // user-defined no-args constructor
    Player()
    {
        name = "None";
        health = 100;
        xp = 0;
    }
    // If a constructor with some args is created, then c++ will not create the default constructor, so in creating empty objects of Player class, compiler will throw an error, so if we explicitly need it, it chould be manually created like above.

    Player(std::string txt, int h, int x)
    {
        name = txt;
        health = h;
        xp = x;
    }

    // Member Methods
    void setName(std::string txt)
    {
        name = txt;
    }

    std::string getName()
    {
        return name;
    }
};

int main(void)
{
    Player mark;
    mark.setName("Mark Hamilton");
    std::cout << mark.getName() << std::endl;

    Player john{"John Doe", 99, 88};
    std::cout << john.getName() << std::endl;
    return 0;
}