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
    int score{100};
    int *scorePtr{&score};

    cout << "\nscore: " << score << endl;
    cout << "&score: " << &score << endl;

    cout << "\n";

    cout << "scorePtr: " << scorePtr << endl;
    cout << "*scorePtr: " << *scorePtr << endl;
    cout << "'*' is used to de-reference the pointer." << endl;

    cout << "\n";

    // Lets look at another example
    double highTemp{100.7};
    double lowTemp{37.7};
    double *tempPtr{&highTemp};

    cout << *tempPtr << endl;

    tempPtr = &lowTemp;

    cout << *tempPtr << endl;

    cout << "\n";

    // Another example

    string name{"Frankie"};

    string *strPtr{&name};

    cout << *strPtr << endl;

    name = "Jamie";

    cout << *strPtr << endl;

    cout << "\n";

    // Another example
    vector<string> stooges{"Larry", "Moe", "Curly"};
    vector<string> *vctPtr{nullptr};

    vctPtr = &stooges;

    cout << "First stooge: " << (*vctPtr).at(0) << endl;

    cout << "Stooges: ";
    for (auto el : *vctPtr)
        cout << el << " ";
    cout << "\n" <<endl;

    return 0;
}