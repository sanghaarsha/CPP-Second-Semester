#include <iostream>

using namespace std;

int main()
{
	int length{0},breadth{0};
	cout<<"Enter length and breadth of the house:: ";
	cin>>length>>breadth;
	int area = length*breadth;
	cout<<"Area of your house is "<<area<<" sq. ft"<<endl;
	return 0;
}
