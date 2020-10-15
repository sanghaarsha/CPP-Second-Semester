#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector <char> vowels{'a','e','i','o','u'};
	
	cout << vowels[0] << endl;
	cout << vowels[4] << endl;
	
	cout<<endl;
	
	vector <int> test_scores{100,99,89};
	
	cout << "\nTest Scores Using Vector [] syntax" << endl;
	cout << test_scores[0] << endl;
	cout << test_scores[1] << endl;
	cout << test_scores[2] << endl;
	
	cout << "\nTest Scores Using \'at\' method:" << endl;
	cout << test_scores.at(0) << endl;
	cout << test_scores.at(1) << endl;
	cout << test_scores.at(2) << endl;
	cout<<"\n";
	cout << "The size of the vector is : " << test_scores.size() <<endl;
	
	cout<<endl;
	
	cout<< "Enter 3 scores : \n";
	cin>> test_scores.at(0);
	cin>> test_scores.at(1);
	cin>> test_scores.at(2);
	
	cout<<endl;
	
	cout<< "Updated test scores : \n";
	cout << test_scores.at(0) << endl;
	cout << test_scores.at(1) << endl;
	cout << test_scores.at(2) << endl;
	
	int scoreToAdd(0);
	cout<< "\nEnter a score to add to the vector :: ";
	cin>>scoreToAdd;
	test_scores.push_back(scoreToAdd);
	
	cout<< "\nEnter another score to add to the vector :: ";
	cin>>scoreToAdd;
	test_scores.push_back(scoreToAdd);
	
	
	cout << "\nUpdated vector ::" << endl;
	cout << test_scores.at(0) << endl;
	cout << test_scores.at(1) << endl;
	cout << test_scores.at(2) << endl;
	cout << test_scores.at(3) << endl;
	cout << test_scores.at(4) << endl;
	cout<<"\n";
	cout << "The size of the vector is : " << test_scores.size() <<endl;
	
	
	return 0;
}
