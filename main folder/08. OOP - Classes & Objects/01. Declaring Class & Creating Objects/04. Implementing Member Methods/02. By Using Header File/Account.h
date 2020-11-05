#ifndef _ACCOUNT_H_
#define _ACCOUNT_H
#include <string>

class Account
{
private:
    std::string name;
    double balance;

public:
    // Methods: Declared Inline
    void setBalance(double bal) { bal = balance; }

    double getBalance() { return balance; }

    // Methods: that will be defined outside of class declaration
    void setName(std::string n);
    std::string getName();

    bool deposit(double amount);
    bool withdraw(double amount);
};

#endif