#include <iostream>

// Used objects from namespace 'std'
using std::cin;
using std::cout;
using std::endl;

// main Function
int main()
{
    // Pointers to constants
    int highScore{100}, lowScore{55};
    const int *scrPtr{&highScore};
    /*
    * The data pointed is constant.
    * The pointer itself can be changed, but not the data it points to.
    ! *scrPtr = 86; // Error
    *  scrPtr = &lowScore; // Okay 
    */

    // Constant Pointers
    int *const scrPtr2{&highScore};
    /*
    * The data pointed by pointer can be changed.
    * The pointer itself cannot change and point somewhere else.
    * *scrPtr2 = 86; // Okay
    !  scrPtr2 = &lowScore; // Error 
    */

    // Constant Pointer to Constants
    const int *const scrPtr3{&highScore};
    /*
    * The data pointed and pointer iteslf are constant.
    ! *scrPtr3 = 86; // Error
    !  scrPtr3 = &lowScore; // Error 
    */

    return 0;
}