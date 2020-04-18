#include<iostream>
#include<cstdlib>
using namespace std;
double average(int num1, double num2);
int main(){
	int a;
	double b;
	char choice;
	top:
	cout<<"Enter the first number (int type): ";
	cin>>a;
	cout<<"Enter the second number (double type): ";
	cin>>b;
	cout<<"The average of two numbers is "<<average(a, b)<<endl;
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
double average(int num1, double num2)
{
	return((num1+num2)/2);
}
