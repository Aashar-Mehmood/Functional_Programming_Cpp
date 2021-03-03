#include<iostream>
#include<cstdlib>
using namespace std;
float const liter =   0.264179;   //1 liter =  0.264179 gallons
float miles_per_gallon(float liter_consumed, float miles_travelled);
int main()
{
	float a, b;
	char choice;
	top:
	cout<<"Enter the number of liters of gasoline consumed by your car : ";
	cin>>a;
	cout<<endl;
	cout<<"Enter number of miles travelled by your car : ";
	cin>>b;
	cout<<endl;
	cout<<"The car delivered "<<miles_per_gallon(a, b)<<" miles per gallon."<<endl;
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

float miles_per_gallon(float liter_consumed, float miles_travelled)
{
	float gallons_consumed;
	gallons_consumed = liter_consumed*liter;
	
	return miles_travelled/gallons_consumed;
	
}

