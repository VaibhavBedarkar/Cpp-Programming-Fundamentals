#include<iostream>
#include<conio.h>
using namespace std;
class Aaa
{
	public:
		void methoda()
		{
			cout<<"\n Method of class A";
		}
};

class Baa :public Aaa
{
  public:
		void methodb()
		{
		 cout<<"\nMethod of class B";
		}	
};
class Caa :public Aaa
{
 public:
		void methodc()
		{
		 cout<<"\n Method of class C";	
		}	
};
class Daa:public Baa,public Caa
{
	public:
		void methodd()
		{
		 cout<<"\n Method of class D";	
		}
};

int main()
{
	Daa obj;
	cout
	obj.methodd();
	obj.methodb();
	obj.methodc();
	obj.Caa::methoda();
	getch();
}
