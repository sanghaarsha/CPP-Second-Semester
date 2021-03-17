#include <iostream>

//Used objects from namespace 'std'
using std::cin;
using std::cout;
using std::endl;

int main()
{
    // Initializing to null to avoid garbage
    int *intPtr{nullptr};
    cout << intPtr << endl; // 0

    // Intializing to other variables
    int num{10};
    int *numPtr{&num};
    cout << num << endl;

    // &num == numPtr, its because pointer is a variable of data type memory address
    //here its initalized to num, which means it holds memory location of the value stored in num

    cout << numPtr << endl;
    cout << &num << endl;

    return 0;
}
