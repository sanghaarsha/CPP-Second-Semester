#include <iostream>
using namespace std;

int main()
{
    char a{};
    char b{};
    char c{};

    cout << "Enter two char separated by space : " << endl;
    cin >> a >> b >> c;

    cout << boolalpha;
    // shows output in true/false not in 1/0

    cout << (a == b) << endl;

    cout << (a != c) << endl;

    cout << (a == c) << endl;

    return 0;
}