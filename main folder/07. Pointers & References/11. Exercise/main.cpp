#include <iostream>

//Used objects from namespace 'std'
using std::cin;
using std::cout;
using std::endl;

// Function Prototypes
int *applyAll(int *, int, int *, int);
void print(int[], int);

// Main Function
int main()
{
    int array1[]{1, 2, 3, 4, 5}, array2[]{10, 20, 30,40,50};
    int size1{5}, size2{5};
    const int totalSize = size1 * size2;

    cout << "Array 1:" << endl;
    print(array1, size1);
    cout << endl;

    cout << "Array 2:" << endl;
    print(array2, size2);
    cout << endl;

    int *results = applyAll(array1, size1, array2, size2);
    cout << "Result:" << endl;
    print(results, totalSize);
    cout << endl;

    delete[] results;
    cout << endl;

    return 0;
}

// Function Definations

int *applyAll(int *array1, int size1, int *array2, int size2)
{
    int *newArray{nullptr};
    newArray = new int[size1 * size2];

    int count{0};

    for (int i{0}; i < size1; i++)
    {
        for (int j{0}; j < size2; j++)
        {
            newArray[count] = array1[i] * array2[j];
            count++;
        }
    }

    return newArray;
}

void print(int array[], int size)
{
    for (int i{0}; i < size; ++i)
        cout << array[i] << " ";
    cout << endl;
}