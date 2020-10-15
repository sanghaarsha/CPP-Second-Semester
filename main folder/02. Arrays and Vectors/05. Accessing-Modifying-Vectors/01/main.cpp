#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector <int> test{1,2,3};
	
	cout<<test[1]<<endl; // does not provide bound checking
	
	cout<<test.at(1)<<endl; // applying at method
	
	cout<<endl; 
	
	vector <int> test_scores{100,99,88,87,77};
	
	cout<< test_scores.at(0)<<endl;
	cout<< test_scores.at(1)<<endl;
	cout<< test_scores.at(2)<<endl;
	cout<< test_scores.at(3)<<endl;
	cout<< test_scores.at(4)<<endl;
	
	cout<<endl;
	
	cin>> test_scores.at(0);
	cin>> test_scores.at(1);
	cin>> test_scores.at(2);
	cin>> test_scores.at(3);
	cin>> test_scores.at(4);
	
	cout<<endl;
	
	cout<<test_scores.at(0)<<endl; 
	cout<<test_scores.at(1)<<endl; 
	
	cout<<endl;
	 
	//They  change in size dynamics but why?
	test_scores.push_back(6);
	test_scores.push_back(7);
	
	cout<<endl;
	
	//They have push_back method that add new elements at the end of the vector
	cout<< test_scores.at(5)<<endl;
	cout<< test_scores.at(6)<<endl;
	
	// vector provides the bound checking 
	// if bound error is found an error message
	// is thrown like : std::out_of_range...
	
	
	return 0;
}
