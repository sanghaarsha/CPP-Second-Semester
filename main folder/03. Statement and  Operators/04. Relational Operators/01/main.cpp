#include <iostream>
using namespace std;

int main()
{
    int num1{}, num2{};
    cout << boolalpha;

    cout << "Enter two numbers : " << endl;
    cin >> num1 >> num2;

    cout << num1 << " > " << num2 << " : " << (num1 > num2) << endl;
    cout << num1 << " >= " << num2 << " : " << (num1 >= num2) << endl;
    cout << num1 << " < " << num2 << " : " << (num1 < num2) << endl;
    cout << num1 << " <= " << num2 << " : " << (num1 <= num2) << endl;

    return 0;
}
