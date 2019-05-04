#include<iostream>
#include<conio.h>
using namespace std;

class Students
{
	public:
		 void method();
		 void methodb();
	
};

void Students :: method()
{
	cout<<"Welcome...\n";
}

void Students :: methodb()
{
	cout<<"Method 2 is called...\n";
	
}
int main()
{
	Students object;
	object.method();
	object.methodb();
	getch();
	
}
