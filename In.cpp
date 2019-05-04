#include<iostream>
#include<conio.h>
using namespace std;
//level 1----------------------------------
class A
{
	public:
		void AMethod()
		{
		 cout<<"\n Hi I am method of A \n";	
		}
};
//level 2-----------------------------------
class B: public A
{
	public:
		void BMethod()
		{
		 cout<<"\n Hi I am method of b \n";	
		}
};
class C: public A
{
	public:
		void CMethod()
		{
		 cout<<"\n Hi I am method of c \n ";	
		}
};
//level 3----------------------------------------
class D: public B
{
	public:
		void DMethod()
		{
		 cout<<"\n Hi I am method of D \n ";	
		}
};class E: public B
{
	public:
		void EMethod()
		{
		 cout<<"\n Hi I am method of E \n ";	
		}
};class F: public C
{
	public:
		void FMethod()
		{
		 cout<<"\n Hi I am method of F \n ";	
		}
};class G: public C
{
	public:
		void GMethod()
		{
		 cout<<"\n Hi I am method of G \n ";	
		}
};
//level 4-----------------------------------------------
class H:public D,public E,public F,public G
{
	public:
		void HMethod()
		{
			cout<<"\n Hi I am method of H \n";
		}
};
//main program
int main()
{
	H obj;
	cout<<"\n --------level 4-----------\n";
	obj.HMethod();
	cout<<"\n --------level 3-----------\n";
	obj.DMethod();
	obj.EMethod();
	obj.FMethod();
	obj.GMethod();
	cout<<"\n --------level 2-----------\n";
	obj.D::BMethod();
	obj.F::CMethod();
	//cout<<"\n --------level 1-----------\n";
	//obj.B::obj.E::obj.H::AMethod();
	
	getch();
	
}
