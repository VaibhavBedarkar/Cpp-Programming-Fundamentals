#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int *p1,*p2,*p3;
	
	p1=new int;
	p2=new int;
	p3=new int;
	
	cout<<"Enter the value to add";
	cin>>*p1>>*p2;
	*p3=*p1 + *p2;
	cout<<"Addition is :"<<*p3;
	
	delete p1;
	delete p2;
	delete p3;
	
	getch();
	
}
