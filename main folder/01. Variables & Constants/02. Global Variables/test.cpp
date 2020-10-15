#include <iostream>

using namespace std;

int a{2},b{3},c{4}; //Global Variables

int main()
{
	int c{5}; //Local Variable
	
	//Program first checks within scope of main
	//Than checks global variables
	
	cout<<a<<b<<c<<endl;
	
	return 0;
}
