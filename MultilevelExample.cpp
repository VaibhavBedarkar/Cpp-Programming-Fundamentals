#include<iostream>
#include<conio.h>
using namespace std;

class A
{
	public:
		int a,b,c;
		int getA()
		{
		  cout<<"\n Enter value of A";
		  cin>>a;
		  cout<<"\n Enter value of B";
		  cin>>b;
		  c=a+b;
		  return c;		  	
		}
};
class B:public A
{
	public:
		int d,e,f;
		int getB()
		{
		 d=getA();
		 cout<<"Enter the value of E";
		 cin>>e;
		 f=d-e;
		 return f;	
		}
};

class C:public B
{
	public:
		int h,g,i;
		int getC()
		{
		 g=getB();
		 h=getA();
		 i=g*h;
		 return i;
		}
		
};

int main()
{  int x;
	C obj;
	x=obj.getC();
	cout<<x;
	getch();
}
