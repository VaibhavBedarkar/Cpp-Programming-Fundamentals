#include<iostream>
#include<conio.h>
using namespace std;
class encapsulate
{
	private:
		int x,y;
	public:
		void get(int a,int b)
		{
			x=a;
			y=b;			
		}
	
	    void display()
	    {
			cout<<"\n a ="<<x;
			cout<<"\n b ="<<y;			
		}
	
};

int main()
{
   encapsulate obj;
   obj.get(10,20);
   obj.display();
   getch();	
}
