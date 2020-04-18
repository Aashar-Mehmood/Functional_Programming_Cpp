#include<iostream>
#include<cstdlib>
using namespace std;
char checkNumber(double a);
int main(){
	top:
	double num;
	char choice;
	cout<<"Enter your number :";
	cin>>num;
	cout<<endl;
	cout<<"Your number is : "<<checkNumber(num);
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
char checkNumber(double a){
	if(a>=0){
		return 'P';
	}
	else if(a<0){
		return 'N';
	}
}
