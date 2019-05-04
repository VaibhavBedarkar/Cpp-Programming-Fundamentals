#include<iostream>
#include<conio.h>
using namespace std;

class MultiCpyConst
{    
   float a,b,are,vol;
	public:
		MultiCpyConst(int a,int b,int c);
		MultiCpyConst(MultiCpyConst &obj);
	    //MultiCpyConst(MultiCpyConst &area);
		
};

MultiCpyConst :: MultiCpyConst(int a,int b,int c)
{
	cout<<"Side 'a' is :"<<a<<"\n";
	cout<<"Side 'b' is :"<<b<<"\n";
	cout<<"Side 'c' is :"<<c<<"\n";
}
MultiCpyConst :: MultiCpyConst(MultiCpyConst &obj)
{   int s=obj.a;
	int w=obj.b;
	are=s*w;
	cout<<"Their Area is "<<are<<"\n";
}
/*MultiCpyConst :: MultiCpyConst(MultiCpyConst &area)
{
	vol=(area.are)*c;
	cout<<"Their Volume is "<<vol<<"\n";
}*/
int main()
{
	MultiCpyConst obj(10,4,2);
	MultiCpyConst area(obj);
	//MultiCpyConst volume(area);
	getch();
	
}
