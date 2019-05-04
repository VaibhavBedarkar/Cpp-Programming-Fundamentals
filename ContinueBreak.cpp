#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i;
	for(i=1;i<=5;i++)
	{
		if(i==5)
		{
		  break;			
		}
	cout<<"\nvalue of i : "<<i<<"\n";
	 
	   if(i==3)
	   {
		continue;			
	  }
	cout<<"\n Continue : "<<i<<"\n ";
	cout<<"\n value of i : "<<i<<"\n";
			
   }
   getch();
}
