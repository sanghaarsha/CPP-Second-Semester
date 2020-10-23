#include <iostream>

//Used objects from namespace 'std'
using std::cin;
using std::cout;
using std::endl;

int main()
{
    int *p;

    cout << "p : " << p << endl;
    cout << "p address : " << &p << endl;
    cout << "size of p : " << sizeof(p) << endl;

    p = nullptr;
    cout << "p : " << p << endl;

    return 0;
}
