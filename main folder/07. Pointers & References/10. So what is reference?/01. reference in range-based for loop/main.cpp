#include <iostream>
#include <vector>
#include <string>

//Used objects from namespace 'std'
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
    vector<string> names{"Hari", "Ram", "Krishna"};

    // Range-based for loop without reference
    // The value is not changed for the elements of vector

    for (auto item : names)
    {
        // Here 'item' is a copy
        // and does not point to real elements
        item = "Doesn't Change";
    }

    for (auto item : names)
    {
        cout << item << endl;
    }

    // Range-based for loop with reference
    for (auto &item : names)
    {
        // Now 'item' is a reference to original element
        // Changing them will change the elements
        // as 'item' is alias to each elements of vector
        item = "This Changes";
    }

    for (auto item : names)
    {
        cout << item << endl;
    }

    return 0;
}
