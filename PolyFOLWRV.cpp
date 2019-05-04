#include<iostream>
#include<conio.h>
#define pi 3.14
using namespace std;
class Shape
{
	public:
		int a1;
		double a2;
		int Area(int l,int b)
		{
			a1=l*b;
			return a1;
		}

        double Area(int r)
        {
			a2=pi*r*r;
			return a2;
			
		}

};

int main()
{
	Shape obj;
	int r=obj.Area(12,2);
	
	cout<<"\n Area of rectangle "<<r;
	double c=obj.Area(2);
	
	cout<<"\n Area of Circle  "<<c;
	getch();
	
}
