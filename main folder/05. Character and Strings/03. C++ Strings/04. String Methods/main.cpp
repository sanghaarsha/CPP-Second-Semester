#include <iostream>
#include <string>

//Used Namespaces
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(){
	
	string s1 = "Hello, World";
	string s2{};
	
	s2 = s1.substr(0,5);
	cout<<"s2 = "<<s2<<endl;
	
	cout<<"Index of - 'Hello' = "<<s1.find("Hello")<<endl;
	cout<<"Index of - 'World' = "<<s1.find("World")<<endl;
	
	cout<<"s1.erase(6,1) = "<< s1.erase(5,1)<<endl;
	
	cout<<"Length of s1 = "<<s1.length()<<endl;
	
	s1.clear();
	
	cout<<"s1 after s1.clear() = "<<s1<<endl;
	
	
	return 0;
}
 
