#include<iostream>
#include<conio.h>
using namespace std;
template <class X> void swapmethod(X&a,X&b)
{
	X temp;
	temp=a;
	a=b;
	b=temp;
}
int main()
{
    int i=10,j=20;
	cout<<"\n Value of I :"<<i<<"\n Value of J :"<<j;
	swapmethod(i,j); 
	cout<<"\n New Value of I :"<<i<<"\n New Value of J :"<<j;
	getch();
}
