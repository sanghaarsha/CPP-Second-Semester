#include <iostream>
#include <string>
#include <string.h>

// Used objects from namespace 'std'
using std::boolalpha;
using std::cin;
using std::cout;
using std::endl;
using std::string;

// main Function
int main()
{
    int scores[]{100, 95, 87, 68, 85, -1};
    // * -1 here is sentinal value

    int *scrPtr{scores};

    while (*scrPtr != -1)
    {
        cout << *scrPtr << endl;
        scrPtr++;
    }
    cout << "\n";

    // commonly used
    scrPtr = scores;
    while (*scrPtr != -1)
    {
        cout << *scrPtr++ << endl;
    }
    cout << "\n";

    // another example
    string s1{"Frankie"};
    string s2{"Frankie"};
    string s3{"Jamie"};

    string *p1{&s1};
    string *p2{&s2};
    string *p3{&s3};

    cout << boolalpha;

    cout << p1 << " == " << p2 << " : " << (p1 == p2) << endl;
    cout << p1 << " == " << p3 << " : " << (p1 == p3) << endl;

    cout << *p1 << " == " << *p2 << " : " << (*p1 == *p2) << endl;
    cout << *p1 << " == " << *p3 << " : " << (*p1 == *p3) << endl;
    cout << "\n";

    char name[]{"Frankie"};
    char *chPtr1{nullptr};
    char *chPtr2{nullptr};

    chPtr1 = &name[0];
    chPtr2 = &name[3];
    cout << "name: " << name << ", chPtr1: " << chPtr1 << ", chPtr2: " << chPtr2 << endl;
    cout << chPtr2 << " - " << chPtr1 << " : " << (chPtr2 - chPtr1) << endl;
    cout << "In above string, n is 3 char away from F." << endl;
    return 0;
}
