#include<iostream>
#include<conio.h>
using namespace std;
class Parent
{
	public:
		void ParentMethod()
		{
		  cout<<"Hi I am Method of parent class \n";	
		}
};

class Child : public Parent
{
	public:
		void ChildMethod()
		{
		  cout<<"Hi I am Method from child class \n";	
		}
};

int main()
{
	Child obj;
	obj.ParentMethod();
	obj.ChildMethod();
	getch();
}
