#include <iostream>

//Used objects from namespace 'std'

using std::cout;
using std::endl;

unsigned long long factorial(unsigned long long);

int main(void)
{
    cout << factorial(0) << endl;
    return 0;
}

unsigned long long factorial(unsigned long long n)
{
    if (n == 0)
        return 1;

    return n * factorial(n - 1);
}