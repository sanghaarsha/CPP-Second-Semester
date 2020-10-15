#include <iostream>

using namespace std;

int main()
{	int num{};
	const int min{10};
	const int max{100};
	
	cout << "Enter a number between"<<min<<" and "<<max<<" : "<<endl;
	cin>> num;
	
	if(num>=10 && num<=100){
		cout<<num<<" lies between " <<min<<" and "<<max;
	}else{
		cout<<num<<" does not lie between " <<min<<" and "<<max;
	}
	return 0;
}
