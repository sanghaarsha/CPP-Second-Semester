#include <iostream>
#include "Account.h"

int main()
{
    Account frank_Account;
    frank_Account.setName("Frank Hamilton");
    frank_Account.setBalance(2300.0);

    if (frank_Account.deposit(200.0))
        std::cout << "Deposit Ok!" << std::endl;
    else
        std::cout << "Deposit Not Allowed!" << std::endl;

    if (frank_Account.withdraw(500.0))
        std::cout << "Withdrawl Ok!" << std::endl;
    else
        std::cout << "Withdrawl Not Allowed,\nNot Sufficent Fund!" << std::endl;

    return 0;
}