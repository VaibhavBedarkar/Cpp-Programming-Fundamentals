#include<iostream>
#include<conio.h>

using namespace std;

class Area_Shape
{
	public:
		void Area(int l,double b)
		{
		int a;	
			a=l*b;
			cout<<"\n Area of Rectangle is:  "<<a;	
		}
		
		void Area(double pis,int r)
		{
		double a2;
		
		a2=r*r*pis;
		cout<<"\n Area of circle :"<<a2;			
			
		}
	
};

int main()
{
	
	Area_Shape obj;
	obj.Area(10,2.1);
	obj.Area(3.14,1);
	getch();
	
}
