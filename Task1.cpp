#include<iostream>
#include<cstdlib>
#include<conio.h>
using namespace std;
int sum(int num1, int num2, int num3);
int main()
{
	int a, b, c;
	char choice;
	top:
	cout<<"Enter the first number : ";
	cin>>a;
	cout<<"Enter the second number : ";
	cin>>b;
	cout<<"Enter the third number : ";
	cin>>c;
	cout<<endl;
	cout<<"The sum of three numbers is "<<sum(a, b, c)<<endl;
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
sum(int num1, int num2, int num3)
{
return (num1+num2+num3);	
}

