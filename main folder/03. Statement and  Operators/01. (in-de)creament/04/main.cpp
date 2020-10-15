#include <iostream>

using namespace std;

int main()
{
	int counter{10};
	int result{0};
	
	cout<< "\n Counter : "<< counter << endl;
	
	result = ++counter + 10;
	// counter += 1; 
	// counter = 10+1 = 11;
	// result = 11+10 = 21;
	
	cout<< "\n Counter : "<< counter << endl;
	cout<< "\n Result : "<< result << endl; 
	
	return 0;
}
