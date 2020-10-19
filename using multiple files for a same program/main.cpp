#include <iostream>
#include "sum.cpp"
#include "mul.cpp"
#include "sub.cpp"

using namespace std;

int main()
{
    cout << "Enter two integers :: ";
    int a{}, b{};
    cin >> a >> b;
    sum(a, b);
    mul(a, b);
    sub(a, b);
    return 0;
}