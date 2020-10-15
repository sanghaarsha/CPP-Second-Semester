#include <iostream>
#include <climits>

using namespace std;

int main()
{	
	cout<<"char: "<<sizeof(char)<<" bytes."<<endl;
	cout<<"int: "<<sizeof(int)<<" bytes."<<endl;
	cout<<"unsigned int: "<<sizeof(unsigned int)<<" bytes."<<endl;
	cout<<"short: "<<sizeof(short)<<" bytes."<<endl;
	cout<<"long: "<<sizeof(long)<<" bytes."<<endl;
	cout<<"long long: "<<sizeof(long long)<<" bytes."<<endl;
	
	cout<<"\n";
	
	cout<<"float: "<<sizeof(float)<<" bytes."<<endl;
	cout<<"double: "<<sizeof(double)<<" bytes."<<endl;
	cout<<"long double: "<<sizeof(long double)<<" bytes."<<endl;
	
	cout<<"\n";
	
	//Using values defined in climits
	
	cout<<"Minimum Values: "<<endl;
	cout<<"char: "<<CHAR_MIN<<endl;
	cout<<"int: "<<INT_MIN<<endl;
	cout<<"short: "<<SHRT_MIN<<endl;
	cout<<"long: "<<LONG_MIN<<endl;
	cout<<"long long: "<<LONG_MIN<<endl;

	cout<<"\n";

	cout<<"Maximum Values: "<<endl;
	cout<<"char: "<<CHAR_MAX<<endl;
	cout<<"int: "<<INT_MAX<<endl;
	cout<<"short: "<<SHRT_MAX<<endl;
	cout<<"long: "<<LONG_MAX<<endl;
	cout<<"long long: "<<LLONG_MAX<<endl;
	
	
	return 0;
}
