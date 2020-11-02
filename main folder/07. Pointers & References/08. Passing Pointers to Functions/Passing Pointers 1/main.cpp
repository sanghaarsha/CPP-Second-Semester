#include <iostream>

// Used objects from namespace 'std'
using std::cin;
using std::cout;
using std::endl;

// Prototype
void doubleData(int *);

// main Function
int main()
{
    int num{4};

    doubleData(&num);

    cout<<num<<endl;

    return 0;
}

//Defination
void doubleData(int *intPtr)
{
    *intPtr *= 2; //*intPtr = *intPtr * 2

    // *intPtr : Derefernces the pointer
    // *= 2 doubles the dereferenced value stored in that address 
    // ? we need not return value, it's changed in the memory location it was stored 
}