/************************************************
 * 				movie(second index)
 * 
 * 					0	1	2	3	
 * 				------------------	
 * 				0 | 0 | 4 | 3 | 5
 * reviewer		1 | 2 | 3 | 3 | 5
 * (first 		2 | 1 | 4 | 4 | 5
 * index)
 * 
 * 
 ************************************************/

#include <iostream>

using namespace std;

int main()
{
	const int rows{3},cols{4};
	
	int movieRatings[rows][cols]{
		
		{0,4,3,5},
		{2,3,3,5},
		{1,4,4,5}
		
		};
		
		//Lets see rating given by first user to 3rd movie
		
		cout<<"\nRatings by User First to Third Movie is :: "<<movieRatings[0][2]<<endl;
	
	return 0;
}
