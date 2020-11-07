#include <iostream>
#include <string>

// Lets consider we are Creating 'Player' Class for a character in a game
class Player
{
    // We are making everyhing Public, so we can access from main
    // Later on, we will learn when should Public and Private  be used

public:
    // Attributes
    std::string name;
    int health, xp;

    // Methods
    void talk(std::string text) { std::cout << name << " says: " << text << std::endl; };
    bool isAlive();

    // Attributes and Methods are members of a class
    // Encapsulation is all about putting these members together
};

int main()
{
    // Creating an Object of Player Class
    Player john;

    // Setting Attributes for a Object of Player class
    john.name = "John Doe";
    john.health = 100;
    john.xp = 23;

    // Accessing Attribute of Object 'john' of 'Player' Class
    std::cout << john.name << ", " << john.health << ", " << john.xp << std::endl;
    // Accessing Method of Object 'john' of 'Player' Class
    john.talk("Hello, How are you doing?");
    std::cout << "\n";
    // So. lets create pointer to an object
    Player *mark = new Player();

    // Setting Attributes Using Dot Operator
    (*mark).name = "Mark Hamilton";
    (*mark).health = 50;
    (*mark).xp = 40;
    // Accessing Attributes and Methods Using Dot Operator
    std::cout << (*mark).name << ", " << (*mark).health << ", " << (*mark).xp << std::endl;
    (*mark).talk("Doing good. Is Clint Online?");
    std::cout << "\n";

    delete mark; // releasing allocated heap space

    // So, lets create pointer to an object
    Player *clint = new Player();

    // Setting Attributes Using Member of pointer (Arrow) Operator
    clint->name = "Clint Clark";
    clint->health = 25;
    clint->xp = 10;
    // Accessing Attributes Using Member of pointer (Arrow) Operator
    std::cout << clint->name << ", " << clint->health << ", " << clint->xp << std::endl;
    clint->talk("Yeah I'm On, Got anything?");
    std::cout << "\n";

    delete clint; // releasing allocated heap space

    return 0;
}