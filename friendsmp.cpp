#include<iostream>
#include<conio.h>
using namespace std;
class frnd
{
	private:
		friend void hi(frnd obj1)
		{
		cout<<"\n Hi !! \n ";	
		}
	    
	    friend void hello(frnd obj1)
	    {
			cout<<"\n Hello!! how are you \n";	
		}
	
};

int main()
{
	frnd obj2;
	hi(obj2);
	hello(obj2);
	getch();
	
}
