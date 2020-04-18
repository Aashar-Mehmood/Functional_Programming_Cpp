#include<iostream>
#include<cstdlib>
using namespace std;
double read_filter();

int main()
{
	char choice;
	top:
	cout<<read_filter();
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

double read_filter()
{
	double num;
	cout<<"Enter your number : ";
	cin>>num;
	if(num>=0){
		return num;
	}
	else return 0;
}
