#include <iostream>
#include <string>

//Used Classes from namespace 'std'
using std::cin;
using std::cout;
using std::endl;
using std::string;

class Player
{
private:
    string name{"Frank"};
    int health{0}, xp{5};

public:
    void talk(string text) { cout << name << " says: " << text << endl; };
    bool isAlive()
    {
        if (health > 0)
            return true;
        else
            return false;
    };
};

int main()
{

    Player frank;

    // ? Inaccessible
    // ! frank.name = "Frank";
    // ! frank.health = 100;
    // ! frank.xp = 24;

    // ? Accessible
    frank.talk("Hello");
    if (frank.isAlive())
        cout << "Alive" << endl;
    else
        cout << "Game Over.." << endl;

    return 0;
}
