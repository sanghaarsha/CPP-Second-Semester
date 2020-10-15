#include <iostream>
#include <string>

//Used Namespaces
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(){
	
	string s1 = "Hello";
	
	cout <<s1[0]<<endl; //H
	cout <<s1.at(1)<<endl; //H
	
	cout <<"\n";
	cout << "------------"<<endl;
	cout <<"\n";
	
	cout <<"Accessing Characters One at a time ::"<<endl;
	
	for(char c: s1){
		cout << c << endl;
	}
	
	return 0;
}
 
