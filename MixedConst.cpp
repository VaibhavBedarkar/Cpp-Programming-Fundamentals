#include<iostream>
#include<conio.h>
using namespace std;

class MixedConst
{
	public:
		MixedConst();
		MixedConst(float a,float b);
};
MixedConst :: MixedConst()
{
	cout<<"Default Constructor called successfully \n";
}

MixedConst :: MixedConst(float a,float b) 
{
	cout<<"Value of first parameter is "<<a<<"\n";
	cout<<"value of sec para is "<<b<<"\n";
}

int main()
{
	MixedConst Ob1;
	MixedConst Ob2(22.1,23.1);
	getch();
}
