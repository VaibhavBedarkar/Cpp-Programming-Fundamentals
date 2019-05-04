#include<iostream>
#include<conio.h>
using namespace std;
class abstract
{
	private:
		int x;
		
	public:
		void get(int a)
		{
		    x=a;			
		}
		
		int display()
		{
			
		return x;
		}
};

int main()
{
	abstract obj;
	obj.get(10);
	cout<<"value of a :"<<obj.display();
	getch();
}
