#include <iostream>

//Used objects from namespace 'std'
using std::cin;
using std::cout;
using std::endl;

// Prototypes
double calCost(double baseCost, double taxRate = 0.06);

int main()
{
    double cost{0};

    cost = calCost(200.0); // will use default tax
    cout << cost<<endl;
    cost = calCost(100, 0.08); //will use 0.08 as tax rate not default
    cout << cost << endl;

    return 0;
}

// Defination

double calCost(double baseCost, double taxRate)
{
    return baseCost + baseCost * taxRate;
}