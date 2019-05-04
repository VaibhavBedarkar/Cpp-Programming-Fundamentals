#include<iostream>
#include<conio.h>
using namespace std;
template <class T>
 void smethod(T&x,T&y)
 {
	T temp;
	temp=x;
	x=y;
	y=temp;	
		
 }
 
 int main()
 {
	char a,b;
	cout<<"\n Before Swapping";
	cout<<"\n Enter the value of A :";
	cin>>a;
	cout<<"\n Enter the value of B :";
	cin>>b;
	smethod(a,b);
	cout<<"\n After Swapping";
	cout<<"\n New value of A :"<<a;
	cout<<"\n New value of B :"<<b;
    getch();
		
 }
