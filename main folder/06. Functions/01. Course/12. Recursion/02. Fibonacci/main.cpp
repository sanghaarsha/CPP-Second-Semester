#include <iostream>

//Used objects from namespace 'std'

using std::cout;
using std::endl;

unsigned long long fibonacci(unsigned long long);

int main(void)
{
    // pass the position of number in fibonacci series

    cout << fibonacci(5) << endl;
    // cout << fibonacci(30) << endl;
    // cout << fibonacci(40) << endl;

    return 0;
}

unsigned long long fibonacci(unsigned long long n)
{
    if (n <= 1)
        return n;

    return fibonacci(n - 1) + fibonacci(n - 2);
    // * notice fobinacci call two-times than factorial
    // * so, it takes twice the stack space and need more time to compute
}