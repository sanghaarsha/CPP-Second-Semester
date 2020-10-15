#include <iostream>

using namespace std;

int main()
{
	int choice{};
	
	cout<<"enter a number between 1-3 : "<<endl;
	cin>>choice;
	switch(choice){
		case 1: cout<<"1"<<endl; break;
		case 2: cout<<"2"<<endl; break;
		case 3: cout<<"3"<<endl; break;
		default : cout<<"Error, enter valid value."<<endl;
	}
	return 0;
}
