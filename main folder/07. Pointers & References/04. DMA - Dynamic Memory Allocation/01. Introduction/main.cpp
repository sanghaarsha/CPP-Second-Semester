#include <iostream>

//Used objects from namespace 'std'
using std::cin;
using std::cout;
using std::endl;

int main()
{
    int *intPtr{nullptr};
    intPtr = new int; // allocating an integer on the heap

    cout << intPtr << endl;  // Allocated Memory address
    cout << *intPtr << endl; // Garbage Value at allocated Memory address

    *intPtr = 100; // Replacing garbage value in allocated heap memory
    cout << *intPtr << endl;

    delete intPtr; //deallocating the heap memory

    return 0;
}