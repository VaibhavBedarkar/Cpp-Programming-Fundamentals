#include<iostream>
#include<conio.h>
using namespace std;
class Area
{
	public:
		int s;
		float r;
		Area();
		Area(int a);
		Area(float l,float b);
        Area(char ar,int a,float l,float b);
        
};
Area :: Area()
{    
	 cout<<"Area of following fig. \n";
     cout<<"-----------------------------\n";
}
 
Area :: Area(int a)
{   
	s=a*a;
	cout<<"Area of Square is: "<<s<<"\n";
}

Area :: Area(float l,float b)
{
	r=l*b;
	cout<<"Area of Rectangle is: "<<r<<"\n";
	
}

Area ::Area(char ar,int a,float l,float b)
{
	cout<<"Side Denoted by :"<<ar<<"\n";
	cout<<"Side is "<<a<<"\n";
	cout<<"Length is"<<l<<"Breadth is"<<b<<"\n";
	}

int main()

{
	
	Area ob;
	Area sq(4);
	Area rect(22.1,2.1);
	Area ch('s',4,22.1,2.1);
	getch();
}
