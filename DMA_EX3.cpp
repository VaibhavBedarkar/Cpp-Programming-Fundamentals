#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int *pointer=NULL;

	pointer=new int;
	
	cout<<"Enter the value in pointer \n";
	cin>>*pointer;
	
	cout<<"Address"<<&pointer;
	getch();
	
	
}
