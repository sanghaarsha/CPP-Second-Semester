#include <iostream>

//Used objects from namespace 'std'
using std::cin;
using std::cout;
using std::endl;

int *lrg(int *a, int *b)
{
    if (*a > *b)
        return a;
    else
        return b;
}

int main()
{
    cout << "Enter two numbers:";
    int a{}, b{};
    cin >> a >> b;

    cout << "Largest of two: " << *lrg(&a, &b) << endl;

    return 0;
}
