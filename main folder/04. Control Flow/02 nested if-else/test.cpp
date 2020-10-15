#include <iostream>

using namespace std;

int main()
{	int num{};
	const int min{1};
	const int max{100};
	
	cout << "Enter any number betwn "<<min<<" and "<<max<<" : "<<endl;
	cin>>num;
	
	if(num<=100 && num>=1){
		if(num<=100 && num>=80){
			if(num<=80&& num>=1){
				cout<<"number is in range 80-01 .";
			}else{
				cout<<"number is in range 80-100.";
			}
		}else{
				cout<<"number is in range 01-20 .";
		}
	} else{
		cout<< "Given number is not in range of "<<min<<"-"<<max<<" .";
	}
	
	return 0;
}
