#include <iostream>

using namespace std;

int main()
{
	int a{},b{};
	int result{};
	
	cout<< "Enter two numbers : " << endl;
	cin>> a >> b;
	
	if(a != b){
		result = (a>b) ? a : b;
		cout<< "Largest Number : " << result << endl;
	} 
	else{
		cout << "Both are Equal."<<endl;
	} 
	
	
	
	return 0;
}
