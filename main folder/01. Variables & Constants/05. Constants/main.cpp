/******************
 * FRANK's CARPET CLEANING
 * 
 * Charges Per Room : $30
 * 
 * Sales Tax : 6%
 * 
 * Estimates valid for 30 days.
 * 
 ******************/


#include <iostream>

using namespace std;

int main()
{
	const double pricePerRoom{30},validity{30},tax{0.06};
	
	//User-Input
	int numberOfRooms;
	cout<< "Enter number of rooms:: ";
	cin>>numberOfRooms;
	
	cout<<endl;
	
	//Calculation
	double cost,salesTax,grandTotal;
	cost = pricePerRoom*numberOfRooms;
	salesTax=tax*cost;
	grandTotal = cost + salesTax;
	
	//Output
	cout << "Number of rooms:: " << numberOfRooms << endl;
	cout << "Cost:: " << cost << endl;
	cout << "Tax:: " << salesTax << endl;
	cout << "============================================"<<endl;
	cout << "Your total estimate is:: $" << grandTotal << endl;
	cout << "This estimate is valid for " << validity << " days." << endl;
	
	return 0;
}
