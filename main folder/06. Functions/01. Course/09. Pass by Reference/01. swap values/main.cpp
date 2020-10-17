#include <iostream>

//Used objects from namespace 'std'
using std::cin;
using std::cout;
using std::endl;

// Prototypes
void swap(int &, int &);

int main()
{
    int x{10}, y{20};

    cout << "x : " << x << ", y : " << y << endl;
    swap(x, y);
    cout << "x : " << x << ", y : " << y << endl;

    return 0;
}

// Defination
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
