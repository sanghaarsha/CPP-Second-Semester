#include <iostream>

using namespace std;

int main()
{
	int counter{10};
	int result{0};
	
	cout<< "\n Counter : "<< counter << endl;
	
	result = counter++ + 10;
	// result = counter + 10;
	// result = 10+10 = 20;
	// counter += 1;
	// counter = 10+1 = 11;
	
	cout<< "\n Counter : "<< counter << endl;
	cout<< "\n Result : "<< result << endl; 
	
	return 0;
}
