#include <iostream>

//Used objects from namespace 'std'
using std::cin;
using std::cout;
using std::endl;

int add();

int main()
{

    cout << add() << endl;
    cout << add() << endl;
    cout << add() << endl;
    cout << add() << endl;
    cout << add() << endl;

    return 0;
}

int add()
{
    static int num{100};

    return num += 100;
}

// * Notice Unlike normal variable value of static variable is initialized only once
// * Next time it retains value from previous call