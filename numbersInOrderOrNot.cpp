#include<iostream>
#include<cstdlib>
using namespace std;
bool in_order(int num1, int num2, int num3);
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
	cout<<"The given numbers are in order?"<<in_order(a, b, c)<<endl;
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

bool in_order(int num1, int num2, int num3)
{
	if(num1<=num2 && num1<=num3){
		if (num2<=num3){
			return true;
		}
	}
	else if(num1>num2||num1>num3||num2>num3){
	return false;
	}

}
