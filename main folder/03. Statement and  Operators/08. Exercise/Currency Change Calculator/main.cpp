/*
WAP to ask user to input :
an integer representing cents

Then display how to provide change.

1 dollar = 100 cents
1 quarter = 25 cents
1 dime = 10 cents
1 nickel = 5 cents
1 penny = 1 cent
*/

#include <iostream>
using namespace std;

int main()
{
    const int dollarValue{100};
    const int quarterValue{25};
    const int dimeValue{10};
    const int nickelValue{5};

    int balance{}, dollars{}, quarters{}, dimes{}, nickels{};

    cout << " Enter change amounts in cents : " << endl;
    cin >> balance;

    dollars = balance / dollarValue;
    balance -= dollars * dollarValue;

    quarters = balance / quarterValue;
    balance -= quarters * quarterValue;

    dimes = balance / dimeValue;
    balance -= dimes * dimeValue;

    nickels = balance / nickelValue;
    balance -= nickels * nickelValue;

    cout << " Dollars : " << dollars << endl;
    cout << " Quarters : " << quarters << endl;
    cout << " Dimes : " << dimes << endl;
    cout << " Nickels : " << nickels << endl;
    cout << " Pennies : " << balance << endl;

    return 0;
}