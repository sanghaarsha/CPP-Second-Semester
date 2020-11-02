#include <iostream>
#include <vector>
#include <string>

// Used objects from namespace 'std'
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

// Prototypes
void display(const vector<string> *const v);
void display(int *array, int sentinel);

// main Function
int main()
{
    vector<string> stooges{"Larrry", "Moe", "Curly"};
    display(&stooges);

    int numbers[]{90, 50, 40, 20, 30, -1};
    display(numbers, -1);
    // notice *array is not passed unlike *stooges
    // it's because internally array stores address of the first data stored
    // doing *numbers will dereference the value and convert into integer type not array type

    cout << endl;
    return 0;
}

//Definations

//For vector
void display(const vector<string> *const v)
{

    // (*v).at(0) = "WE CAN CHANGE VALUES TOO";
    // v = nullptr;

    // ! But we do not want to mess up value, so we should use const qualifier
    // * Now if we run the code uncommenting above lines, it will throw error
    // * Both pointer and value pointed to are constants now

    for (auto str : *v)
    {
        cout << str << " ";
    }
    cout << endl;
}

//For Array
void display(int *array, int sentinel)
{
    while (*array != sentinel)
    {
        cout << *array++ << " ";
    }
    cout << endl;
}
