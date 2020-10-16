#include <iostream>

//Used Namespaces
using std::cin;
using std::cout;
using std::endl;

// Function Declaraion
int sum(int, int);

int main()
{
    int num1{0}, num2{0};
    cout << "Enter two numbers to add : ";
    cin >> num1 >> num2;
    cout << "Sum = " << sum(num1, num2) << endl;
    return 0;
}

// Function Defination
int sum(int n1, int n2)
{
    return n1 + n2;
}