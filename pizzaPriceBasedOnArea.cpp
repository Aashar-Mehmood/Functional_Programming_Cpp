#include<iostream>
#include<cstdlib>
#include<math.h>
using namespace std;
void bestPizza(float d1, float d2, float price1, float price2);
int main()
{
	float a, b, c, d;
	char choice;
	label:
	cout<<"Enter the diameter of first pizza : ";
	cin>>a;
	cout<<endl;
	cout<<"Enter the diameter of second pizza : ";
	cin>>b;
	cout<<endl;
	cout<<"Enter the price of first pizza : ";
	cin>>c;
	cout<<endl;
	cout<<"Enter the price of second pizza : ";
	cin>>d;
	cout<<endl;
	bestPizza(a, b, c, d);
	cout<<endl;
	cout<<"Would you like to run the program again ? Enter Y or N... "<<endl;
	cin.ignore();
	cin.get(choice);
		switch(choice){
		case 'y':
		goto label;
		break;
		case 'Y':
		goto label;
		break;
		default:
		exit(0);
	}
}

void bestPizza(float d1, float d2, float price1, float price2)
{
	float A1, A2;
	float price1_per_sq_inch, price2_per_sq_inch;
	
	A1=(3.1416*d1*d1)/4.0;
	A2=(3.1416*d2*d2)/4.0;
	
	price1_per_sq_inch=price1/A1;
	price2_per_sq_inch=price2/A2;
	
	if(price1_per_sq_inch<price2_per_sq_inch){
		cout<<"You should buy pizza1 because it's price per square inch is : "<<price1_per_sq_inch<<endl;
		cout<<endl;
		cout<<"While the price of second pizza per square inch is : "<<price2_per_sq_inch<<endl;
	}
	else {
	
		cout<<"You should buy pizza2 because it's price per square inch is : "<<price2_per_sq_inch<<endl;
		cout<<endl;
		cout<<"While the price of pizza1 per square inch is : "<<price1_per_sq_inch<<endl;
	}
	
}
