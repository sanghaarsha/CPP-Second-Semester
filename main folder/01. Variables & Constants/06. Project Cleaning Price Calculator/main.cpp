#include <iostream>
#include <climits>

using namespace std;

int main()
{
	const double perSmall{25},perLarge{35},tax{0.06},estimation{30};
	
	int smallRooms,largeRooms;
	cout<<"Enter number of small rooms you need cleaned:: ";
	cin >> smallRooms;
	cout<<"Enter number of large rooms you need cleaned:: ";
	cin >> largeRooms;
	
	cout<<endl;
	
	//Calculations
	float cost,salesTax,grandTotal;
	cost = smallRooms*perSmall+largeRooms*perLarge;
	salesTax = tax * cost;
	grandTotal = cost + salesTax;
	
	//Output
	cout<<"Number of small rooms:: "<< smallRooms <<endl;
	cout<<"Number of large rooms:: "<< largeRooms <<endl;
	cout<<"Price per small room:: $"<< perSmall <<endl;
	cout<<"Price per large room:: $"<< perLarge <<endl;
	cout<<"Cost:: $"<< cost <<endl;
	cout<<"Sales Tax:: $"<< salesTax <<endl;
	cout<<"============================================="<<endl;
	cout<<"Total Estimate:: $"<<grandTotal<<endl;
	cout<<"This estimate is for "<<estimation<<" days."<<endl;
	
	return 0;
}
