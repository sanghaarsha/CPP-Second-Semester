#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<double> temps{87.2,77.1,80.0,72.5};
	
	double avgTemp{},tempSum{};
	
	for(auto temp : temps){
		tempSum += temp;
	}
	
	avgTemp = tempSum/temps.size();
	
	cout << "Average Temprature : "<<avgTemp<<endl;
	
	return 0;
}

