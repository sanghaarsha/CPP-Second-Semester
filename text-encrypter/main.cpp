#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

// Used methods from std class
using std::cin;
using std::cout;
using std::endl;
using std::ifstream;
using std::ofstream;
using std::string;

// Function Declaration
void encrypt(const string data, const string key, string);
void decrypt(const string data, const string key, string);
string getFileData(string fileName);

int main()

{
    // Data and Key
    string data{"POIUYTREWQASDFGHJKLMNBVCXZpoiuytrewqasdfghjklmnbvcxz0123456789.,! "};
    string key{"qazwsxedcrfvtgbyhnujmikolpQAZWSXEDCRFVTGBYHNUJMIKOLP9632587410*#+&"};

    // Options
    cout << "Press '1' to encrypt a file" << endl;
    cout << "Press '2' to decrypt a file" << endl;

    int choice{};
    cout << "\nYour Choice : ";
    cin >> choice;

    // Getting file names
    cout << "Enter File Name with extension : ";
    string fileName{};
    cin >> fileName;

    // Getting file data
    string message = getFileData(fileName);

    // Operation acc. to user-input
    if (choice == 1)
    {
        encrypt(data, key, message);
    }
    else if (choice == 2)
    {
        decrypt(data, key, message);
    }

    else
        cout << "Invalid Choice!" << endl;

    return 0;
}

string getFileData(string fileName)
{
    ifstream file(fileName);
    string line{}, concatData{};

    while (getline(file, line))
    {
        concatData += line + "\n";
    }

    return concatData;
}

void encrypt(const string data, const string key, string msgPlain)
{
    string msgEncrypted{};
    for (char c : msgPlain)
    {
        size_t pos;
        pos = data.find(c);
        if (pos != std::string::npos)
        {
            msgEncrypted += key[pos];
        }
        else
        {
            msgEncrypted += c;
        }
    }

    ofstream secretFile;
    secretFile.open("secret.txt");
    secretFile << msgEncrypted;
    secretFile.close();

    cout << "\nMessage sucessfully encrypted.\n";
    cout << endl;
}

void decrypt(const string data, const string key, string msgEncrypted)
{
    string msgDecrypted{};
    for (char c : msgEncrypted)
    {
        size_t pos;
        pos = key.find(c);
        if (pos != std::string::npos)
        {
            msgDecrypted += data[pos];
        }
        else
        {
            msgDecrypted += c;
        }
    }

    ofstream messageFile;
    messageFile.open("message.txt");
    messageFile << msgDecrypted;
    messageFile.close();

    cout << "\nMessage sucessfully decrypted.\n";
    cout << endl;
}
