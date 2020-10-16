#include <iostream>
#include <cmath>

//Used Namespaces
using std::cin;
using std::cout;
using std::endl;

int main()
{
    double num{};

    cout << "Enter a number :";
    cin >> num;

    cout << "Square Root : " << sqrt(num) << endl;
    cout << "Cube Root : " << cbrt(num) << endl;  
    cout << "sine : " << sin(num) << endl;
    cout << "cosine : " << cos(num) << endl;
    cout << "The ceil : " << ceil(num) << endl;
    cout << "The floor : " << floor(num) << endl;
    cout << "The round of : " << round(num) << endl;

    double power{};
    cout << "Enter the power to raise : ";
    cin >> power;
    cout << num << " ^ " << power << " : " << pow(num, power) << endl;

    return 0;
}
