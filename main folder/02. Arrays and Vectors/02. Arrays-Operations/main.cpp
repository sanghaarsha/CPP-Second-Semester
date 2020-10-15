#include <iostream>

using namespace std;

int main()
{
	char vowels[]{'a','e','i','o','u'};
	
	cout<<"The first vowel is:: "<<vowels[0]<<endl;
	cout<<"The last vowel is:: "<<vowels[4]<<endl;
	
	double high_temps[]{90.1,89.8,77.5,81.6};
	cout<<"\nThe very high temperature is "<<high_temps[0]<<endl;
	
	high_temps[0]=100.7;
	cout<<"\nThe very high temperature now is "<<high_temps[0]<<endl;
	
	int test_scores[5];
	//These will show the garbage values from allocted memory locations
	cout<<"\nFirst Score at Index 0 :: "<<test_scores[0]<<endl;
	cout<<"Second Score at Index 0 :: "<<test_scores[1]<<endl;
	cout<<"Third Score at Index 0 :: "<<test_scores[2]<<endl;
	cout<<"Fourth Score at Index 0 :: "<<test_scores[3]<<endl;
	cout<<"Fifth Score at Index 0 :: "<<test_scores[4]<<endl;
	
	cout<<endl;
	//lets give them real values
	
	cin>>test_scores[0];
	cin>>test_scores[1];
	cin>>test_scores[2];
	cin>>test_scores[3];
	cin>>test_scores[4];
	
	//lets show the user entered values from array
	cout<<"\nFirst Score at Index 0 :: "<<test_scores[0]<<endl;
	cout<<"Second Score at Index 0 :: "<<test_scores[1]<<endl;
	cout<<"Third Score at Index 0 :: "<<test_scores[2]<<endl;
	cout<<"Fourth Score at Index 0 :: "<<test_scores[3]<<endl;
	cout<<"Fifth Score at Index 0 :: "<<test_scores[4]<<endl;
	
	//Lets cout name of the array and see what it gives
	
	cout<<"\n value of the name of the array :: "<<test_scores<<endl;
	
	// so, we get location of the array :: 0x7fff9e49a5c0
	// which means name of the array is location of array in c++
	
	return 0;
}
