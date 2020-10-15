#include <iostream>

using namespace std;

int main()
{
	int counter{10};
	int result{0};
	
	cout<< "\n Counter: "<<counter;
	
	result = ++counter;
	// counter += 1;
	// result = counter;
	
	cout<< "\n Counter: "<<counter;
	cout<< "\n Result: "<<result;
	return 0;
}
