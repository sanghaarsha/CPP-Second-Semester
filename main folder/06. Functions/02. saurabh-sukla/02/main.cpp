#include <iostream>

using namespace std;

int sum(int , int);

int main()
{
	int a,b;
	cout << "Enter two numbers :" << endl;
	cin >> a >> b;
	int result = sum(a,b);
	cout << "The sum of " << a <<" and " << b << " = " << result << endl;
	return 0;
}


int sum (int num1, int num2){
	return num1+num2;
}
