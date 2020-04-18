#include<iostream>
#include<cstdlib>
#include<conio.h>
using namespace std;
bool is_root(int num1, int num2);
int main()
{
	int a, b;
	char choice;
	top:
	cout<<"Enter the first number : ";
	cin>>a;
	cout<<"Enter the second number : ";
	cin>>b;
	cout<<endl;
	cout<<"The first number is root of second number? (1 means 'yes' and 0 means 'No') : "<<is_root(a, b)<<endl;
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
bool is_root(int num1, int num2)
{
	if ((num1*num1)==num2){
		return true;
	}
	else return false;
}

