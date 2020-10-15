#include <iostream>

using namespace std;


int main()
{
	enum color{
		red,green,blue
	};
	
	color screenColor(green);
	
	switch(screenColor){
	
	case red : cout << "red" <<endl; break;
	case green : cout << "green" <<endl; break;
	case blue : cout << "blue" <<endl; break;
	
	default: cout <<"This is an error message !"<<endl;
	}
	
	return 0;
}
