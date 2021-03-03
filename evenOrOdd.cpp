#include<iostream>
#include<cstdlib>
using namespace std;
bool even(int num);
int main()
{
	
	int a;
	char choice;
	top:
	cout<<"Enter your number to check it is even or odd : ";
	cin>>a;
	cout<<"The given number is even? (1 means 'Yes' 0 means 'No') : "<<even(a)<<endl;
	cout<<endl;
	cout<<"Would you like to run the program again ? Enter Y or N... "<<endl;
	cin.ignore();
	cin.get(choice);
		switch(choice){
		case 'y':
		goto top;
		break;
		case 'Y':
		goto top;
		break;
		default:
		exit(0);
	}	
}

bool even(int num){
	if (num%2==0){
		return true;
	}
	else return false;
}
