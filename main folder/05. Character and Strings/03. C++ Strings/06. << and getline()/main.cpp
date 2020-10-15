#include <iostream>
#include <string>

//Used Namespaces
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(){
	/*
	string s1;
	cout<<"Enter a sentence : ";
	cin>>s1;
	cout<<s1<<endl;
	
	cout<<"\n";
	
	*/
	
	string s2;
	cout<<"Enter a sentence : ";
	getline(cin,s2);
	cout<<s2<<endl;
	
	return 0;
}
 
