#include <iostream>
#include <string>

// Used Namespaces
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(void)
{
    string alphabet{"0123456789'.abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ "};
    string key{"7412589630@=poiuytrewqasdfghjklmnbvcxzPOIUYTREWQASDFGHJKLMNBVCXZ*"};

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

    cout << "\nHere is your encrypted message :" << endl;
    cout << encoded << endl;
    cout << "\n";

    string decoded{};
    for (char c2 : encoded)
    {
        size_t pos{};
        pos = key.find(c2);
        decoded += alphabet[pos];
    }

    cout << "Here is your decrypted message :" << endl;
    cout << decoded << endl;
    cout << "\n";

    return 0;
}