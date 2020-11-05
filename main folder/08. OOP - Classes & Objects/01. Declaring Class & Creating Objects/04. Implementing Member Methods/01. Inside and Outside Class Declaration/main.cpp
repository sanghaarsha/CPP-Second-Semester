#include <iostream>
#include <string>

//Used Classes from namespace 'std'
using std::cin;
using std::cout;
using std::endl;

class Account
{
private:
    std::string name;
    double balance;

public:
    // Methods: Declared Inline
    void setBalance(double bal) { bal = balance; }

    double getBalance() { return balance; }

    // Methods that will be defined outside of class declration
    void setName(std::string n);
    std::string getName();

    bool deposit(double amount);
    bool withdraw(double amount);
};

// Method Definations Declared in Account Class

void Account::setName(std::string n)
{
    n = name;
}

std::string Account::getName()
{
    return name;
}

bool Account::deposit(double amount)
{
    // if verify amount
    balance += amount;
    return true;
}

bool Account::withdraw(double amount)
{
    if (balance - amount >= 0)
    {
        balance -= amount;
        return true;
    }
    else
    {
        return false;
    }
}

int main(void)
{
    Account frank_Account;
    frank_Account.setName("Frank Hamilton");
    frank_Account.setBalance(2300.0);

    if (frank_Account.deposit(200.0))
        cout << "Deposit Ok!" << endl;
    else
        cout << "Deposit Not Allowed!" << endl;

    if (frank_Account.withdraw(500.0))
        cout << "Withdrawl Ok!" << endl;
    else
        cout << "Withdrawl Not Allowed,\nNot Sufficent Fund!" << endl;

    return 0;
}