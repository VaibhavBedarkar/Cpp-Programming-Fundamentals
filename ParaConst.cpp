#include<iostream>
#include<conio.h>
using namespace std;

class ParaConst
{
	public:
		ParaConst(int a,int b);
};

ParaConst :: ParaConst(int a,int b)
{   
	cout<<"The value of first Parameter is: "<<a<<"\n";
	cout<<"The Value of sec para is:"<<b<<" \n";
}

int main()
{
	ParaConst P(2,3);
	getch();
}
