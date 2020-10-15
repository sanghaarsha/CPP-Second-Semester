#include <iostream>

using namespace std;

int main()
{
	int num{0};
	
	cout<< "Enter a number less than or equals to 10."<<endl;
	cin>>num;
	
	if(num<=10){
		cout<< "Numbers from 1 to "<<num<<" :"<<endl;
		for(int i{1}; i<=num; i++){
			if(i<num) cout << i <<", ";
			else cout<<i<<endl;
		}
	}else{
		cout<< "Not a valid number." <<endl;
	}
	return 0;
}
