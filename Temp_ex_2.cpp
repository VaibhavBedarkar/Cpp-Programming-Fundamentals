#include<iostream>
#include<conio.h>
using namespace std;
template <class E>
void DetailMethod2(E&y)
{
	cout<<"\n Mobile no:";
	cout<<y;
}


template <class D>
void DetailMethod(D&x)
{
	cout<<"\n Name :";
	cout<<x;
}


int main()
{
	int b[10];
	char a;

	cout<<"\n Enter the Mobile no";
	cin>>b;
		
	cout<<"\n Enter the Name ";
	cin>>a;
	
	DetailMethod2(b);
	DetailMethod(a);
	getch();
}
