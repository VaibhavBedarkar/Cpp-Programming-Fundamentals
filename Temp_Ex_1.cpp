#include<iostream>
#include<conio.h>
using namespace std;
template <class A>
 void addm(A&x,A&y)
 {
	A add;
	add=x+y;
	x=add;	
		
 }
 template <class B>
 void subm(B&p,B&q)
 {
	B sub;
	sub=p-q;
	p=sub;		
 }
 
 int main()
 {
		int a,b,p,q;
		cout<<"\n enter value of A and B \n";
		cin>>a>>b;
		cout<<"\n enter value of P and Q \n";
		cin>>p>>q;
		addm(a,b);
		cout<<"\n Addition is :"<<a;
		subm(p,q);
		cout<<"\n Subtraction is :"<<p;
		getch();
		
		
		
}
