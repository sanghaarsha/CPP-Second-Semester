#include <iostream>

//Used objects from namespace 'std'
using std::cin;
using std::cout;
using std::endl;

int main()
{
    int *arrayPtr{nullptr};
    int size{};

    cout << "How big do you want your array? :";
    cin >> size;

    arrayPtr = new int[size];

    cout << arrayPtr << endl; // Memory address in heap of first element of array of input size

    delete[] arrayPtr;

    return 0;
}