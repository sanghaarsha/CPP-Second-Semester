#include <iostream>

//Used objects from namespace 'std'
using std::cin;
using std::cout;
using std::endl;

// Function prototype or function forward declaration
double sum(double, double);

int main(void)
{
    double n1{}, n2{}, result{};
    cout << "Enter two numbers to add : ";
    cin >> n1 >> n2;

    // Function Call
    result = sum(n1, n2);

    cout << result << endl;
    return 0;
}

// Function Defination
double sum(double a, double b)
{
    return a + b;
}

// Previous example has used function protyping extently