#include<iostream>
#include<conio.h>
using namespace std;
class Shape
{
	public:
		void Area(int l,int b)
		{
			int a1;
			a1=l*b;
			cout<<"\n Area of rect"<<a1;			
			
		}
		
		void Area(double r,double pi)
		{
			int a2;
			a2=pi*r*r;
			cout<<"\n Area of circle is "<<a2;			
		}
};
int main()
{
	Shape obj;
	obj.Area(10,20);
	obj.Area(1.12,10.12);
	getch();
	
}
