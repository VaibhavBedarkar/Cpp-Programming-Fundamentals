#include<iostream>
#include<conio.h>
using namespace std;

class CpyConst
{   int res;
	public:
		CpyConst(int a,int b);
		CpyConst(CpyConst &ObjCpy);
		
};

CpyConst :: CpyConst(int a,int b)
{   
	res=a*b;
	cout<<"Area of Rectangle is: "<<res<<"\n";
	
}

CpyConst :: CpyConst(CpyConst &ObjCpy)
{
	cout<<"Area of rectangle using CpyConst is"<<ObjCpy.res; 
}

int main()
{
	CpyConst Obj(4,6);
	CpyConst ObjCpy(Obj);
	getch();
}
