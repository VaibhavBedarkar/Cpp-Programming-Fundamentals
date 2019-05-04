#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int *p1,a;
	p1=&a;
	cout<<"Enter the value in pointer";
	cin>>a;
		
	
	if(p1==NULL )

   {
	try
	{
			
	  throw(*p1);
	}
	catch(int i)
	{
		cout<<"Pointer is Null";		
	}
	
   }

else
{  
	cout<<"Value of pointer "<<*p1;
}
	
	getch();
}
