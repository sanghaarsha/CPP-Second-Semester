#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector <int> vector1;
	vector <int> vector2;
	
	//adding 10 and 20 to vector 1
	vector1.push_back(10);
	vector1.push_back(20);
	
	cout<<"Vector 1 ::"<<endl;
	cout<< vector1.at(0) <<endl;
	cout<< vector1.at(1) <<endl;
	cout<< "Size of vector :: "<< vector1.size() <<endl;
	cout<<"\n";
	
	//adding 100 and 200 to vector 2
	vector2.push_back(100);
	vector2.push_back(200);
	
	cout<<"Vector 2 ::"<<endl;
	cout<< vector2.at(0) <<endl;
	cout<< vector2.at(1) <<endl;
	cout<< "Size of vector :: "<< vector2.size() <<endl;
	cout<<"\n";
	
	vector<vector<int>> vector2d;
	
	// adding vector 1 and 2 in vector2d
	vector2d.push_back(vector1);
	vector2d.push_back(vector2);
	
	cout<<"Vector 2D ::"<<endl;
	cout<< vector2d.at(0).at(0)<< " "<< vector2d.at(0).at(1)<<endl;
	cout<< vector2d.at(1).at(0)<< " "<< vector2d.at(1).at(1)<<endl;
	cout<<"\n";
	
	// changing element
	
	cout<<"Changed element of vector2d  at 0,0 to ::"<<endl;
	vector2d.at(0).at(0) = 1000;
	cout<< vector2d.at(0).at(0)<<endl;
	cout<<"\n";
	
	// Note : changing the value of vector 1 element at index 0 to 1000 
	// Would not have change the value of vector 2d's element at 0,0 .
	
	
	cout<<"Updated Vector 2D ::"<<endl;
	cout<< vector2d.at(0).at(0)<< " "<< vector2d.at(0).at(1)<<endl;
	cout<< vector2d.at(1).at(0)<< " "<< vector2d.at(1).at(1)<<endl;
	
	
	return 0;
}
