#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	double *pointer=NULL;
	int a=10,b=20,c;
	c=a+b;
	pointer = new double;
	*pointer=98.30;
	cout<<"\n Addition is :"<<c;
	cout<<"\n Address of pointer : "<<*pointer;
	delete pointer;
	getch();
}
