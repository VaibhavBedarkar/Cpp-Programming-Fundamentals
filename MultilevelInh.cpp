#include<iostream>
#include<conio.h>
using namespace std;
class GrandParent
{
	public:
		void GParentMethod()
		{
		  cout<<"\n Hi I am GrandParent \n";
		  
		}
};

class Parent : public GrandParent
{
	public:
		void ParentMethod()
		{
		  cout<<"\n Hi I am Parent \n";
		  	
		}
};

class Child :public Parent
{
	public:
		void ChildMethod()
		{
		  cout<<"\nHi I am Child \n";	
		}
};

int main()
{
	Child cobj;
	cobj.GParentMethod();
	cobj.ParentMethod();
	cobj.ChildMethod();
	getch();
	
}
