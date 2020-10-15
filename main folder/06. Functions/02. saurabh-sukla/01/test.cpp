#include <iostream>
using namespace std;

int main(){
	void fun(); //Function Defination
	cout << "This is in main function." <<endl;
	fun(); //Function Call
	return 0;
}

//Function Defination
void fun(){
	cout << "This is in fun function." <<endl;
}
