#include <iostream>

//Used objects from namespace 'std'
using std::cin;
using std::cout;
using std::endl;

// Declarations
int *createArray(size_t, int);
void display(const int *const, size_t);

int main()
{
    // ? Size and inital value for to be created array
    int size{0}, initalValue{0};

    cout << "What size of array of integers you wan to create?" << endl;
    cin >> size;
    cout << "What do you want their initial value to be?" << endl;
    cin >> initalValue;

    // ? Storing address of created array's element at index 0
    int *myArray{nullptr};
    myArray = createArray(size, initalValue);

    // ? Displaying contents of the array
    display(myArray, size);

    // ? deallocating the storage taken in the heap
    delete[] myArray;

    return 0;
}

// Definations

int *createArray(size_t size, int initValue = 0)
// ? size: size of array, initValue: inital value of elements in array
{
    int *newStorage{nullptr};

    // ? Allocating space for the array of 'size' in Heap
    newStorage = new int[size];

    // ? Pushing the inital value provided by the user
    for (size_t i{0}; i < size; ++i)
    {
        *(newStorage + i) = initValue;
    }

    // ? Returning the address of first element of the array stored in the heap
    return newStorage;
}

void display(const int *const array, size_t size)
{
    for (size_t i{0}; i < size; i++)
    {
        // Formatting output
        if (i < size - 1)
            cout << *(array + i) << ", ";
        else
            cout << *(array + i);
        // ? *(array + 0) : dereferences and prints the first element of the array...
        // ?  and goes on and prints every other element
    }
    cout << endl;
}