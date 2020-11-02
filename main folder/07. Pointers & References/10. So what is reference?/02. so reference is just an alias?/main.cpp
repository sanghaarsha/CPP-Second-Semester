#include <iostream>
#include <vector>

//Used objects from namespace 'std'
using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    int num{100};
    int &ref{num};

    cout << "Setting num{100} & &ref{num}: " << endl;
    cout << "num: " << num << endl;
    cout << "ref: " << ref << endl;
    cout << "&ref: " << &ref << endl;
    cout << "\n";

    num = 200;
    cout << "Setting num = 200: " << endl;
    cout << "num: " << num << endl;
    cout << "ref: " << ref << endl;
    cout << "&ref: " << &ref << endl;
    cout << "\n";

    ref = 300;
    cout << "Setting ref = 300: " << endl;
    cout << "num: " << num << endl;
    cout << "ref: " << ref << endl;
    cout << "&ref: " << &ref << endl;
    cout << "\n";

    cout << "No-matter which value you change both will have the same value," << endl;
    cout << "because a reference is an alias to the variable initialized." << endl;

    return 0;
}