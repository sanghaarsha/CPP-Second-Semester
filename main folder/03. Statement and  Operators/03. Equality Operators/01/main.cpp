#include <iostream>
using namespace std;

int main()
{
    int a{1};
    int b{2};
    int c{1};

    cout << boolalpha;
    // shows output in true/false not in 1/0

    cout << (a == b) << endl;

    cout << (a != c) << endl;

    cout << (a == c) << endl;

    return 0;
}

// Note : 10 = 9.999 (from float and above data type in C++)