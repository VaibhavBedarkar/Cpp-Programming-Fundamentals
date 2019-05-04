#include<iostream>
#include<conio.h>
using namespace std;
class DecMak
{
	public:
		int a,b,len,i;
		void get();
		void ife();
		void fo();
		void dowhil();
		void whil();
		void gto();
};
void DecMak :: get()
{
	cout<<"\n Enter two nos. a and b\n";
	cin>>a>>b;
}
void DecMak :: ife()
{
	if(a>b)
	{
	  cout<<"\n A is greater than B\n";
	}
	else if(a==b)
	{
	  cout<<"\n Both nos. are equal\n";	
	}
	else
	{
	  cout<<"\n  B is greater than A \n";
	}
}
void DecMak :: fo()
{
	cout<<"\n Enter the no of times you want to print A\n";
	cin>>len;
	for(i=0;i<len;i++)
	{
	  cout<<a;
	}
}

void DecMak :: dowhil()
{
	do{
		cout<<"HI..\n";
		a++;
	}while(a==b);
	
}
void DecMak :: whil()
{
   while(a==b)
   {
     cout<<b;
	 a++;		
   }	
}
/*void DecMak :: gto()
{   res:
	cout<<"Jump successfull!!!";
}*/

int main()
{   char s;
    int ch;
	DecMak ob;
	ob.get();
	res:
		{cout<<"Jump successfull!!";
			}
	do{
		cout<<"\n 1.if else loop \n";
		cout<<"\n 2.for loop \n";
		cout<<"\n 3.DoWhile Loop \n";
		cout<<"\n 4.While Loop \n";
		cout<<"\n 5.Goto \n";
		cin>>ch;
	switch(ch)
	{
		case 1:
			ob.ife();
			break;
		
		case 2:
			ob.fo();
			break;
		
		case 3:
			ob.dowhil();
			break;
		
		case 4:
			ob.whil();
		    break;
		
		case 5:
		     //ob.gto();
			goto res;
			break;
		
		default:break;	
		
	}
	cout<<"Do you Want to cont...";
	cin>>s;
}while(s=='y');

getch();
}
