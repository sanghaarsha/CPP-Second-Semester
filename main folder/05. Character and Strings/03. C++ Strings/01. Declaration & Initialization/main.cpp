#include <iostream>
#include <string>

//Used Namespaces
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(){
	
	string s1; //empty
	string s2{"Frankie"}; //Frankie
	string s3{s2}; //Frankie
	string s4{"Frankie",3}; //Fra
	string s5{s3,0,2}; //Fr : (2 characters from index 0)
	string s6{5,'A'}; // AAAAA : Notice 'A' is a character
	
	cout<<"s1 = "<<s1<<endl;
	cout<<"s2 = "<<s2<<endl;
	cout<<"s3 = "<<s3<<endl;
	cout<<"s4 = "<<s4<<endl;
	cout<<"s5 = "<<s5<<endl;
	cout<<"s6 = "<<s6<<endl;
	
	return 0;
}
