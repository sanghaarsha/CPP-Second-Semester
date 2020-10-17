#include <iostream>
#include <vector>

// * Used objects from namespace 'std'
using std::cin;
using std::cout;
using std::endl;
using std::vector;

void print(const vector<int> &);

int main(void)
{
    vector<int> data{1, 2, 3, 4, 5};
    print(data);
    return 0;
}

void print(const vector<int> &v)
{
    for (int data : v)
        cout << data << endl;
}

// * This code uses pass by refernce
// * It saves memory and adds performance
// * 'const' saves vector from any changes by mistake
// * By this method we get benifiet of the both worlds!