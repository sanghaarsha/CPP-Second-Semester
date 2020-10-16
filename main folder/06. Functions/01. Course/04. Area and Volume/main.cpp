#include <iostream>
#include <math.h>
#define PI 3.14159265

//Used Objects from namespace std
using std::cin;
using std::cout;
using std::endl;

// Function declarations
void area();
void volume();
double calcArea(double);
double calcVolume(double, double);

int main()
{
    // Function Calls
    area();
    volume();
    return 0;
}

// Function definations
void area()
{
    double rad{};
    cout << "Enter the radius of the circle : ";
    cin >> rad;
    cout << "Volume of the given circle : " << calcArea(rad) << endl;
}

void volume()
{
    double rad{}, height{};
    cout << "Enter the radius and height of the cylinder : ";
    cin >> rad >> height;
    cout << "Volume of the given cylinder : " << calcVolume(rad, height) << endl;
}

double calcArea(double r)
{
    return PI * pow(r, 2);
}

double calcVolume(double r, double h)
{
    return calcArea(r) * h;
}