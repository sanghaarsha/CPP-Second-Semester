#include <iostream>

using namespace std;

int main()
{
	char ch;
	cout << "Program to calculate area of rectangle."<<endl;
	do{
		cout<< "Enter length and breadth respectively: "<<endl;
		int l,b;
		cin>>l>>b;
		int area = l*b;
		cout<<"Area = "<<area<<endl;
		cout<< "Run the program again?(y/n)";
		cin>>ch;
	}while(ch == 'y' || ch=='Y');
	
	return 0;
}
