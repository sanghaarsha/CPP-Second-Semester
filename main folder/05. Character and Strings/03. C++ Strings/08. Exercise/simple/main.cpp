#include <iostream>
#include <string>

// Used Namespaces
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(void)
{
    cout << "Enter your secret message : ";
    string msg{};
    getline(cin, msg);

    string secret{};
    for (char c1 : msg)
    {
        if (c1 == 'a')
            secret += 'X';
        else if (c1 == 'b')
            secret += 'Z';
        else
            secret += c1;
    }

    cout << "Your encoded message is :" << endl;
    cout << secret << endl;

    string decrypt{};
    for (char c2 : secret)
    {
        if (c2 == 'X')
            decrypt += 'a';
        else if (c2 == 'Z')
            decrypt += 'b';
        else
            decrypt += c2;
    }

    cout << "Your decoded message is :" << endl;
    cout << decrypt << endl;

    return 0;
}