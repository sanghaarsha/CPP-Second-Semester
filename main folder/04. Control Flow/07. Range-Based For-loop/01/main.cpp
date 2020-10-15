#include <iostream>

using namespace std;

int main()
{
	int scores[] {100,97,90};
	
	for(int score : scores){
		cout << score <<endl;
	}
	return 0;
}
