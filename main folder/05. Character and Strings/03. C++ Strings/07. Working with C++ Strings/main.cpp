#include <iostream>
#include <iomanip>
#include <string>

//Used Namespaces
using namespace std;

int main()
{
	string s0;
	string s1{"Apple"};
	string s2{"Banana"};
	string s3{"Kiwi"};
	string s4{"apple"};
	string s5{s1};		 //Apple
	string s6{s1, 0, 3}; //App
	string s7(5, 'A');	 //AAAAA

	cout << s0 << endl;			 //No Garbage Value
	cout << s0.length() << endl; //0 : Empty String

	// Initialized Values
	cout << "s1 is initialized to : " << s1 << endl;
	cout << "s2 is initialized to : " << s2 << endl;
	cout << "s3 is initialized to : " << s3 << endl;
	cout << "s4 is initialized to : " << s4 << endl;
	cout << "s5 is initialized to : " << s5 << endl;
	cout << "s6 is initialized to : " << s6 << endl;
	cout << "s7 is initialized to : " << s7 << endl;

	// Comparison
	cout << boolalpha;
	//(boolalpha to display true/false instead of 1/0)

	cout << s1 << " == " << s5 << " : " << (s1 == s5) << endl;
	cout << s1 << " == " << s2 << " : " << (s1 == s2) << endl;
	cout << s1 << " != " << s2 << " : " << (s1 != s2) << endl;
	cout << s1 << " < " << s2 << " : " << (s1 < s2) << endl;
	cout << s2 << " > " << s1 << " : " << (s2 > s1) << endl;
	cout << s4 << " < " << s5 << " : " << (s4 < s5) << endl;
	cout << s1 << " == "
		 << "Apple"
		 << " : " << (s1 == "Apple") << endl;

	//Assignment

	cout << "s1 was : " << s1 << endl;
	s1 = "Watermelon";
	cout << "s1 is now : " << s1 << endl;

	cout << "s2 was : " << s2 << endl;
	s2 = s1;
	cout << "s1 is now : " << s1 << endl;

	cout << "s3 was : " << s3 << endl;
	s3 = "Frank";
	s3[0] = 'C';
	cout << "s3 is now : " << s3 << endl;
	s3.at(0) = 'P';
	cout << "s3 is now : " << s3 << endl;

	//Concatenation
	s3 = "Watermelon";

	cout << "s3 was : " << s3 << endl;
	s3 = s5 + " and " + s2 + " Juice.";
	cout << "s3 is now : " << s3 << endl;

	/*
	* This will give you an compile error :
	! s3 = "nice " + "cold " + s5 + " juice.";
	? This is because c-style string literals are used directly with '+'
	? C-styled string don't work with '+' operator
	*/

	// Looping

	// Regular 'for' loop
	s1 = "Apple";
	for (size_t i{0}; i < s1.length(); i++)
		cout << s1.at(i) << endl;
	cout << endl;

	// Range-based 'for' loop
	for (char c : s1)
		cout << c << endl;

	//substring
	s1 = "This is a test string.";

	cout << s1.substr(0, 4) << endl;
	cout << s1.substr(5, 2) << endl;
	cout << s1.substr(10, 4) << endl;
	cout << s1.substr(15, 6) << endl;

	// Erase
	s1 = "This is a test string.";
	s1.erase(0, 8);
	cout << s1 << endl;

	// getline
	string fullName{};
	cout << "Enter your name : ";
	getline(cin, fullName);
	cout << "Welcome, " << fullName << " !" << endl;

	// Find
	s1 = "Hello my name is Kent Clark";
	string word{};

	cout << "Enter a word to search :";
	cin >> word;

	size_t position = s1.find(word);

	if (position != string::npos) //npos = no position
		cout << "Found " << word << " at position : " << position << endl;
	else
		cout << "Sorry, '" << word << "' not found." << endl;

	cout << endl;

	return 0;
}
