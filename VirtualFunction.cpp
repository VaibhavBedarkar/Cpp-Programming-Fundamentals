#include<iostream>
#include<conio.h>
using namespace std;

class Base
{
	public:
		virtual void show()
		{
		   cout<<"\n Base class show";
		   	
		}
	    
	    void display()
	    {
		 
		 cout<<"\n Base Class display";	
			
		}
	
} ;

class Derive : public Base
{
	public:
		void display()
		{
		
		cout<<"\n Derive class Display method";
			
		}
	
	void show()
	    {
		
		 cout<<"\n Derive class method show";
		}
	
};
int main()
{
	Base obj1;
	  obj1.show();
	  obj1.display();
	  cout<<"\n\n\t P points to derive";
	  
	Derive obj2;
	   obj2.show();
	   obj2.display();
	   	   
	getch();
	  
	
	
}


