#include<iostream>
#include<conio.h>
using namespace std;
class Shape
{
	public:
		int Area(int l,int b)
		{
			int a=l*b;
			return a;
		}
		
		double Area(double pi,double r)
		{
			double a= pi*r*r;
			return a;			
		}
};
int main()
{
	Shape obj;
	int x=obj.Area(10,20);
	cout<<"\n Area of rectangle: "<<x;
	
	double y=obj.Area(10.11,20.11);
	cout<<"\n Circle area "<<y;
	getch();
}
