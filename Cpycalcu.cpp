#include<iostream>
#include<conio.h>
using namespace std;

class Calculation
{
	int a,b,add,sub;
	public:
		Calculation(int a,int b);
		Calculation( Calculation &obj1);
		  Calculation( Calculation &obj2);
};

Calculation :: Calculation(int a,int b)
{
	cout<<a<<"\n";
	cout<<b<<"\n";	
}

Calculation :: Calculation(Calculation &obj)
{
  	add=obj.a+obj.b;
  	cout<<add;
}

Calculation :: Calculation(Calculation &obj2)
{
  	sub=obj2.add-obj.a;
  	cout<<sub;
}

int main()
{
	Calculation obj(10,4);
	Calculation obj1(obj);
	Calculation obj2(obj1);
	getch();
	
}
