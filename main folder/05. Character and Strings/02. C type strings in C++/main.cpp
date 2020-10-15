#include <iostream>
#include <cstring>
#include <cctype>

//Used Namespaces
using std::cout;
using std::cin;
using std::endl;

int main(){
//	char firstName[20]{},lastName[20]{};
	char fullName[50]{},temp[50]{};

//	cout<<"Enter your first name :"<<endl;
//	cin>>firstName;
//	cout<<"Enter your last name :"<<endl;
//	cin>>lastName;
	
//	Getting first and last name and concatenating 
	cout<<"------------------------------------------"<<endl;
//	cout<< "Hello " <<firstName<< ", your first name has " <<strlen(firstName)<< " characters" <<endl;
//	cout<< "and your last name " <<lastName<< " has " <<strlen(firstName)<< " characters." <<endl;
//	
//	strcat(fullName,firstName);
//	strcat(fullName," ");
//	strcat(fullName,lastName);
//	cout << "\nYour full name is : "<<fullName<<endl;
	
//cout<<"------------------------------------------"<<endl;

//// space counts as a null character
//
//	cout<< "Enter your full name :"<<endl;
//	cin>>fullName;
//	
////Only shows firstname because space is countes as a null character	
//	cout<<"Your full name is : "<<fullName<<endl;

//	To overcome this cin.getline() is used

	cout<< "Enter your full name :"<<endl;
	cin.getline(fullName,50);
	cout<<"------------------------------------------"<<endl;
	cout<<"\nYour full name is : "<<fullName<<endl;
	
//	Lets compare strings
	strcpy(temp,fullName);
	if(strcmp(temp,fullName)==0) cout<<temp<<" and "<<fullName<<" both are same"<<endl;
	else cout<<temp<<" and "<<fullName<<" are different."<<endl;

//	Changing to Upper Case
	for(size_t i{0}; i<strlen(fullName);++i){
		if(isalpha(fullName[i])){
			fullName[i] = toupper(fullName[i]);
		}
	}
	cout<<"------------------------------------------"<<endl;
	cout<<"\nYour full name is : "<<fullName<<endl;
	
//	Lets compare strings again!

	if(strcmp(temp,fullName)==0) cout<<temp<<" and "<<fullName<<" both are same"<<endl;
	else cout<<temp<<" and "<<fullName<<" are different."<<endl;

//	Checking Results of Comparison
	cout<<"------------------------------------------\n"<<endl;
	
	cout<<"Result of comparing "<<temp<<" and "<<fullName<<" : "<<strcmp(temp,fullName)<<endl;
	cout<<"Result of comparing "<<fullName<<" and "<<temp<<" : "<<strcmp(fullName,temp)<<endl;
	
	cout<<"------------------------------------------\n"<<endl;
	
	return 0;
}
