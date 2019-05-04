#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int *summ;
	int a,b,addr;
	cout<<"\nEnter the values of A and B :\n";
	cin>>a>>b;
	summ= new int;
	*summ=a+b;
	cout<<"Addition is :"<<*summ;
	addr=&summ;
	cout<<"Address of summ is"<<addr;
	delete summ;	
	getch();
}
