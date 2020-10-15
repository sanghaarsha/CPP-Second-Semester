#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> numbers {};
	char sel{}; 
	
	do{
		//display menu
		
		cout<< "\nP - Print Numbers" <<endl;
		cout<< "A - Add a Number" <<endl;
		cout<< "M - Mean of Numbers" <<endl;
		cout<< "S - Smallest Number" <<endl;
		cout<< "L- Largest Number" <<endl;
		cout<< "Q - Quit!" <<endl;
		cin>>sel;
		
		if(sel == 'p' || sel == 'P'){
			cout<<"\n";
			if(numbers.size()==0) cout<<"List is empty!!"<<endl;
			for(auto item: numbers){
				cout<<item<<endl;
			}
		}
		
		else if(sel == 'a' || sel == 'A'){
			cout<<"\n";
			int num;
			cout<< "Enter a number to add :";
			cin>>num;
			numbers.push_back(num);
		
		}
		
		else if(sel == 'm' || sel == 'M'){
			cout<<"\n";
			float avg;
			for(auto item: numbers){
				avg += item;
			}
			cout << "Average : "<<avg/numbers.size()<<endl;
		}
		
		else if(sel == 's' || sel == 'S'){
			cout<<"\n";
			int sml{numbers[0]};
			for(auto item: numbers){
				if(item<sml) sml=item;
			}
			cout<<"smallest number : "<<sml<<endl;
		}
		
		else if(sel == 'l' || sel == 'L'){
			cout<<"\n";
			int lrg{0};
			for(auto item: numbers){
				if(item>lrg) lrg=item;
			}
			cout<<"smallest number : "<<lrg<<endl;
		
		} else if(sel == 'q' || sel == 'Q'){
			cout<<"\n";
			cout<<"Exiting ... ";
			break;
		}else{
			cout<<"\n";
			cout<<"Invalid Choice, Try Again!"<<endl;
		}
		
	}while(sel != 'q' || sel != 'Q');
	return 0;
}
