#include <iostream>
#include <string>

// Used Namespaces
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(void)
{
    string alphabet{"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ "};
    string key{"poiuytrewqasdfghjklmnbvcxzPOIUYTREWQASDFGHJKLMNBVCXZ*"};

    cout << "Enter your message : ";
    string message{};
    getline(cin, message);

    string encoded{};
    for (char c1 : message)
    {
        size_t pos{};
        pos = alphabet.find(c1);
        encoded += key[pos];
    }

    cout << encoded << endl;

    string decoded{};
    for (char c2 : encoded)
    {
        size_t pos{};
        pos = key.find(c2);
        decoded += alphabet[pos];
    }

    cout << decoded << endl;

    return 0;
}