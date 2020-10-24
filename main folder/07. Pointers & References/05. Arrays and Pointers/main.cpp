#include <iostream>

// Used objects from namespace 'std'
using std::cin;
using std::cout;
using std::endl;

// main Function
int main()
{
    // Array name =  address of element at index 0 of the array
    // Pointer variable = address it points to
    // If both point to the same data type, they can be used interchangeably

    int scores[]{100, 95, 87};

    cout << "scores: " << scores << endl;
    cout << "*scores: " << *scores << endl;
    cout << "\n";

    int *scorePtr{scores};
    cout << "scorePtr: " << scorePtr << endl;
    cout << "*scorePtr: " << *scorePtr << endl;
    cout << "\n";

    // Elements of array
    cout << "Getting elements by Array Subscript Notation: " << endl;
    cout << scores[0] << endl;
    cout << scores[1] << endl;
    cout << scores[2] << endl;
    cout << "\n";

    // Using pointer to get value from an array as they can be used interchangeably here
    // So, internally c++ is using pointers in arrays
    cout << "Getting elements by Pointer Subscript Notation: " << endl;
    cout << scorePtr[0] << endl;
    cout << scorePtr[1] << endl;
    cout << scorePtr[2] << endl;
    cout << "\n";

    // Using array Offset Notation
    cout << "Getting elements by Array Offset Notation: " << endl;
    cout << *(scores) << endl;
    cout << *(scores + 1) << endl;
    cout << *(scores + 2) << endl;
    cout << "\n";

    // Using pointers in expressions
    // This is possible because elements of array are stored contigiously in memory
    cout << "Getting elements by Pointer Offset Notation: " << endl;

    cout << *(scorePtr) << endl;
    cout << *(scorePtr + 1) << endl;
    cout << *(scorePtr + 2) << endl;

    return 0;
}