#include <iostream>
#include <vector>
using namespace std;

void print(const vector<int> &);
void add(vector<int> &);
void mean(const vector<int> &);
void smallest(const vector<int> &);
void largest(const vector<int> &);
char getSelection();
void displayMenu();

int main()
{
    vector<int> numbers{};
    char sel{};

    do
    {
        displayMenu();

        sel = getSelection();

        switch (sel)
        {
        case 'P':
            print(numbers);
            break;
        case 'A':
            add(numbers);
            break;

        case 'M':
            mean(numbers);
            break;

        case 'S':
            smallest(numbers);
            break;

        case 'L':
            largest(numbers);
            break;

        case 'Q':
            cout << "Quitting.." << endl;
            break;

        default:
            cout << "Try Again!" << endl;
        }

    } while (sel != 'Q');

    return 0;
}

void displayMenu()
{
    cout << "\nP - Print Numbers" << endl;
    cout << "A - Add a Number" << endl;
    cout << "M - Mean of Numbers" << endl;
    cout << "S - Smallest Number" << endl;
    cout << "L- Largest Number" << endl;
    cout << "Q - Quit!" << endl;
}

char getSelection()
{
    char sel{};
    cin >> sel;
    return toupper(sel);
}

void print(const vector<int> &v)
{
    cout << "\n";
    if (v.size() == 0)
        cout << "List is empty!!" << endl;
    for (auto item : v)
    {
        cout << item << endl;
    }
}

void add(vector<int> &v)
{
    cout << "\n";
    int num;
    cout << "Enter a number to add :";
    cin >> num;
    v.push_back(num);
}

void mean(const vector<int> &v)
{
    cout << "\n";
    float avg{};
    for (auto item : v)
    {
        avg += item;
    }
    cout << "Average : " << avg / v.size() << endl;
}

void smallest(const vector<int> &v)
{
    cout << "\n";
    int sml{v[0]};
    for (auto item : v)
    {
        if (item < sml)
            sml = item;
    }
    cout << "smallest number : " << sml << endl;
}

void largest(const vector<int> &v)
{
    cout << "\n";
    int lrg{0};
    for (auto item : v)
    {
        if (item > lrg)
            lrg = item;
    }
    cout << "smallest number : " << lrg << endl;
}
