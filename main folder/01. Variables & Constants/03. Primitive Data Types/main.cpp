#include <iostream>

using namespace std;

int main()
{
	char midInit{'R'};
	cout<<"My Mid-Initial is "<<midInit<<endl;
	
	unsigned short int examScore{55};
	cout<<"My exam score is "<<examScore<<endl;
	
	int teamNo{15};
	cout<< "There were "<< teamNo <<" teams present in my meeting."<<endl;
	
	long nepalPopulation{2'64'94'504}; 
	//C++14 allows use of apostrophe like commas, 
	//compiler will strip it just like comments
	cout<< "Acc. to recent census, "<< nepalPopulation <<" is the population of Nepal."<<endl;
	
	long long worldPopulation{7'806'024'315};
	cout<< "Current world population is, "<<worldPopulation<<"."<<endl;
	
	long long toAlphaCentauri{40'208'000'000'000};
	cout<<"Distance from earth to Alpha Centaur is, "<<toAlphaCentauri<<" KMs."<<endl;
	
	float carFee{401.25};
	cout<<"My car payment is $"<<carFee<<"."<<endl;
	
	double pi{3.14159265};
	cout<<"short value of "<<pi<<endl;
	
	long double piDigits{3.14159265358979323846264338327950288};
	cout<<"longer value of "<<piDigits<<endl;
	
	bool isOver{false};
	cout<<"Is gave over yet ? :: "<<isOver<<endl;
	
	return 0;
}
