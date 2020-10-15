#include <iostream>

using namespace std;

int main()
{
	int counter{10};
	int result{0};
	
	cout<< "\n Counter : "<< counter << endl;
	
	result = counter++;
	// result = counter;
	// counter += 1;
	
	cout<< "\n Counter : "<< counter << endl;
	cout<< "\n Result : "<< result << endl;
	
	return 0;
}
