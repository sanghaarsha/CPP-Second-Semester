#include <iostream>

//Used objects from namespace 'std'
using std::cin;
using std::cout;
using std::endl;

// Prototypes
void printArray(int array[], size_t size);
void setArray(int array[], size_t size, int value);

// Main Function
int main()
{
    int myScores[]{100, 98, 90, 86, 84};

    printArray(myScores, 5);
    setArray(myScores, 5, 100);
    printArray(myScores, 5);

    cout << endl;

    return 0;
}

// Defination

void printArray(int array[], size_t size)
{
    cout << endl;

    for (size_t i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
}

void setArray(int array[], size_t size, int value)
{
    for (size_t i = 0; i < size; i++)
    {
        array[i] = value;
    }
    cout <<endl;
}