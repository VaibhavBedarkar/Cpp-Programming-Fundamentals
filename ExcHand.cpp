#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int a,b,c;
	cout<<"\n Enter the value of 'A'";
	cin>>a;
	cout<<"\n Enter the value of 'B'";
	cin>>b;
	 
	 if( b == 0 )
	 {
		try
		{
			
		throw(b);	
		}
		catch(int i)
		{
		cout<<"\n Divide by zero error";
		}
				
	}
	else
	{
		c=a/b;
		cout<<"\n Division is :"<<c;
		
	}
	getch();
	
	
}
