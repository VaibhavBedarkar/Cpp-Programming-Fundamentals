#include<iostream>
#include<conio.h>
using namespace std;

class DefConstru 
{
	public:
		DefConstru();
	
};

DefConstru :: DefConstru()
	{
	   cout<<"Default constructor is called :\n";	
	}
	
int main()
{
	DefConstru Obj;
	getch();
}
