#include <iostream>
using namespace std;

int main()
{
    bool first{true};
    bool second{false};

    cout << boolalpha;

    cout << "!" << first << " : " << !first << endl;
    cout << "!" << second << " : " << !second << endl;

    cout <<"\n" << first << " && " << first << " : " << first&&first;
    cout <<"\n" << second << " && " << second << " : " << second&&second;
    cout <<"\n" << first << " && " << second << " : " << first&&second;

    cout << "\n";

    cout <<"\n" << first << " || " << first << " : " << first||first;
    cout <<"\n" << second << " || " << second << " : " << second||second;
    cout <<"\n" << first << " || " << second << " : " << first||second;

    cout <<"\n";
    return 0;
}
