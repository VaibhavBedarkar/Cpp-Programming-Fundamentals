#include<iostream>
#include<conio.h>
using namespace std;

class GetValA
{
	public:
		int a;
		void getmethoda()
		{
		 cout<<"\n ----------------------- \n";
		 cout<<"\n Enter the Value of 'a'";
		 cin>>a;
		}
};

class GetValB
{
	public:
		int b;
		void getmethodb()
		{
		 cout<<"\n--------------------------\n";
		 cout<<"\n Enter the Value of 'b'";
		 cin>>b;
		}
};

class Operat : public GetValA,public GetValB
{
	public:
		int add,sub,mult,div;
		void ope()
		{
			add=a+b;
			sub=a-b;
			div=a/b;
			mult=a*b;
			cout<<"\n--------------------------\n"; 
			cout<<"\n There Addition is:"<<add;
			cout<<"\n There Subtraction is:"<<sub;
			cout<<"\n There Div is:"<<div;
			cout<<"\n their mult is:"<<mult;
		}
	
};

int main()
{
	Operat obj;
	obj.getmethoda();
	obj.getmethodb();
	obj.ope();
	getch();
}
