#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a,b,sum,*p,*q;
	cout<<"\n Enter two nos. to add \n";
	cin>>a>>b;
	
	p=&a;
	q=&b;
	sum= *p + *q;
	cout<<"Sum of addition :"<<sum;
	getch();
	
	
	
}
