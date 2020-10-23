#include <iostream>
#include <string>
#include <vector>

//Used objects from namespace 'std'
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
    int num{10};
    cout << "num: " << num << endl;
    cout << "size of num: " << sizeof(num) << endl;
    cout << "address of num: " << &num << endl;

    cout << "\n";

    int *p;
    cout << "p: " << p << endl;
    cout << "size of p: " << sizeof(p) << endl;
    cout << "address of p: " << &p << endl;
    // now assigning nullptr
    p = nullptr;
    cout << "p: " << p << endl;

    cout << "\n";

    int *p1{nullptr};
    double *p2{nullptr};
    unsigned long long *p3{nullptr};
    vector<string> *p4{nullptr};
    int *p5{nullptr};

    // Every size will be '8', because for my ma 8chine is default memory address size
    cout << "size of p1: " << sizeof(p1) << endl;
    cout << "size of p2: " << sizeof(p2) << endl;
    cout << "size of p3: " << sizeof(p3) << endl;
    cout << "size of p4: " << sizeof(p4) << endl;
    cout << "size of p5: " << sizeof(p5) << endl;

    cout << "\n";

    int score{10};
    double highTemp{100.7};

    int *scorePtr{};

    scorePtr = &score;
    cout << "score: " << score << endl;
    cout << "Address of score: " << &score << endl;
    cout << "Value of scorePtr: " << scorePtr << endl;

    
    return 0;
}
