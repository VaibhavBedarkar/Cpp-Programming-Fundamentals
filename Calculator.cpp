#include<iostream>
#include<conio.h>
using namespace std;
// creation of class
class Calculator
{
	public:
		int a,b,c;
		void get();
		void add();
		void sub();
		void mult();
		void div();
};
//creation of method

void Calculator :: get()
{   cout<<"Enter the value of a \n";
	cin>>a;
	
	cout<<"Enter the value of b \n";
	cin>>b;
}

void Calculator :: add()
{   cout<<"Welcome to Additon \n"; 
	c=a+b;
	cout<<"Addition is : \n"<<c;	
}
 
void Calculator :: sub()
{
	c=a-b;
	cout<<"\n Subtraction is :\n"<<c;
}

void Calculator :: div()
{
	cout<<"\nTheir Division is \n";
	c=a/b;
	cout<<c;	
}

void Calculator :: mult()
{
	cout<<"\nMultplication :\n";
	c=a*b;
	cout<<c;
}
//------------------------------------------main fun---
int main()
{
	
	Calculator cal;
	cal.get();
	cal.add();
	cal.sub();
	cal.mult();
	cal.div();
	getch();
}
