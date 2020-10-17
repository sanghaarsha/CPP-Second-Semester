#include <iostream>
#include <string>
//Used objects from namespace 'std'
using std::cin;
using std::cout;
using std::endl;
using std::string;

// Prototypes
string add(string, string);
double add(double, double);

int main()
{
    cout << add("Hello ", "World !") << endl;
    cout << add(10, 20) << endl;

    return 0;
}

// Defination

string add(string str1, string str2)
{

    return str1 + str2;
}

double add(double num1, double num2)
{
    return num1 + num2;
}

/*
*Overloading simply means naming functions same name but with different parameters, and compiler will decide to run which function acc. to passed arguments' types

* Function overloading is extensively used on OOP Design
*/