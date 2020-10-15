#include <iostream>

using namespace std;

int main()
{
	int i{1};
	cout<< "Program to display even numbers from range 1-10."<<endl;
	
	while(i<=10){
		if(i%2==0) cout<<i<<endl;
		i++;
	}
	
	return 0;
}
