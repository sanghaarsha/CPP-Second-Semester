#include <iostream>

using namespace std;

int main()
{
	int test_scores[5] {1,2,3,4,5};
	
	cout<<"First Element: "<<test_scores[0]<<endl;
	cout<<"Second Element: "<<test_scores[1]<<endl;
	cout<<"Third Element: "<<test_scores[2]<<endl;
	cout<<"Fourth Element: "<<test_scores[3]<<endl;
	cout<<"Fifth Element: "<<test_scores[4]<<endl;
	
	cout<<endl;
	
	cout<<"Enter 5 integers to change the values of array."<<endl;
	
	cin>>test_scores[0]>>test_scores[1]>>test_scores[2]>>test_scores[3]>>test_scores[4];
	
	cout<<endl;
	
	cout<<"Modified values of array are."<<endl;
	
	cout<<"First Element: "<<test_scores[0]<<endl;
	cout<<"Second Element: "<<test_scores[1]<<endl;
	cout<<"Third Element: "<<test_scores[2]<<endl;
	cout<<"Fourth Element: "<<test_scores[3]<<endl;
	cout<<"Fifth Element: "<<test_scores[4]<<endl;
	
	return 0;
}
