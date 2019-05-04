#include<iostream>
#include<conio.h>
using namespace std;
class Calculation
{
	private:
		friend void add(Calculation obj1)
		{
			int a,b,c;
			cout<<"\n Enter the value of 'A' :";
			cin>>a;
			cout<<"\n Enter the value of 'B' :";
			cin>>b;
			c=a+b;
			cout<<"\n Addition is :"<<c;			
		}
	    friend void sub(Calculation obj1)
	    {
			int d,e,f;
			cout<<"\n\n Enter the value of 'D' :";
			cin>>d;
			cout<<"\n Enter the value of 'E' :";
			cin>>e;
			f=d-e;
			cout<<"\n Subtraction is :"<<f;		
		}
};

int main()
{
	Calculation obj2;
	add(obj2);
	sub(obj2);
	getch();
}
