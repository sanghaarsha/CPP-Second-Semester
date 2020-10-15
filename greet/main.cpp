#include <iostream>
#include <string>

// Used Classes from std namespace
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string greet{"Hello "}, name{};
    cout << "Enter your name :: ";
    getline(cin, name);
    greet += name;
    cout << greet << endl;
    return 0;
}