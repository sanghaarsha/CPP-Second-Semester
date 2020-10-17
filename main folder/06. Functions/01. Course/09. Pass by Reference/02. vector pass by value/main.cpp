#include <iostream>
#include <vector>

// * Used objects from namespace 'std'
using std::cin;
using std::cout;
using std::endl;
using std::vector;

void print(vector<int>);

int main(void)
{
    vector<int> data{1, 2, 3, 4, 5};
    print(data);
    return 0;
}

void print(vector<int> v)
{
    for (auto data : v)
        cout << data << endl;
}

// * Here formal parameter 'v' is the copy of actual parameter data
// * Copying data multiple times leads performance lags and storage issues
// * In next code we will pass vector as a reference