#include <iostream>

//Used objects from namespace 'std'
using std::cin;
using std::cout;
using std::endl;

//declaring global variables
int num{123};

// function declarations
int returnGlobal();

int main()
{
    // declaring local variables
    int num{456};

    // * if local and global variables have same names
    // * value of local variables overwrites for that scope

    // * local variables can only be used inside the scope
    // * the scope for local variables is inside the '{}' ther are declared on

    cout << num << endl; //shows local value

    cout << returnGlobal() << endl; // shows global value

    return 0;
}

// Function defination

int returnGlobal()
{
    // * notice how global variables do not need to be passed as an parameters
    return num;
}