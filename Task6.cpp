#include<iostream>
#include<cstdlib>
#include<cctype>
using namespace std;
bool is_digit(char character);

int main()
{
	char choice, ch;
	top:
	cout<<"Enter your character to check it is digit or not : ";
	cin>>ch;
	cout<<endl;
	cout<<"Is the character a digit ?('1' means 'Yes' and '0' means 'No') : "<<is_digit(ch)<<endl;
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

bool is_digit(char character)
{
	if (isdigit(character)){
		return true;
	}
	else return false;
}
