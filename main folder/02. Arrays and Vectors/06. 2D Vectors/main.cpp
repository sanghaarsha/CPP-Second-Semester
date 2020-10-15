// A two dimensional vector is vector of a vector

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<vector<int>> movieRatings
	{
		{1,4,2,3},
		{1,2,4,4},
		{1,3,4,5}
	};
	
	cout<<"\n Movie ratings by #1 reviewer using array syntax :: "<<endl;
	
	cout<<movieRatings[0][0]<<endl;
	cout<<movieRatings[0][1]<<endl;
	cout<<movieRatings[0][2]<<endl;
	cout<<movieRatings[0][3]<<endl;
	
	cout<<"\n Movie ratings by #1 reviewer using Vector syntax (at) :: "<<endl;
	
	cout<<movieRatings.at(0).at(0)<<endl;
	cout<<movieRatings.at(0).at(1)<<endl;
	cout<<movieRatings.at(0).at(2)<<endl;
	cout<<movieRatings.at(0).at(3)<<endl;
	
	
	return 0;
}
