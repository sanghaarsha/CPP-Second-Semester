#include <iostream>

// Used objects from namespace 'std'
using std::cin;
using std::cout;
using std::endl;

// Prototype
void swapValue(int *num1, int *num2);

// main Function
int main()
{
    int x{}, y{};

    cout << "Enter two integers." << endl;
    cout << "x: ";
    cin >> x;
    cout << "y: ";
    cin >> y;

    cout << "\nBefore Swapping." << endl;
    cout << "x: " << x << "\ny: " << y << endl;

    swapValue(&x, &y);

    cout << "\nAfter Swapping." << endl;
    cout << "x: " << x << "\ny: " << y << endl;

    return 0;
}

//Defination
void swapValue(int *num1, int *num2)
{
    int num3{*num2};
    *num2 = *num1;
    *num1 = num3;
}