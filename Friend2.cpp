#include<iostream>
#include<conio.h>
using namespace std;
class MultFrnd
{
	public:
		int a,b;
		void get()
		{
			
		cout<<"\n Enter the value of A :";
		cin>>a;
		
		cout<<"\n Enter the value of B :";
		cin>>b;	
			
		}
	
	private:
		friend int add(MultFrnd obj1)
		{
			return (obj1.a+obj1.b);
			
		}
		
		friend int sub(MultFrnd obj1)
		{
			return (obj1.a-obj1.b);
			
		}
	
};
int main()
{
	MultFrnd obj2;
	obj2.get();
	cout<<"\n There addition is :"<<add(obj2);
	cout<<"\n There Subtraction is :"<<sub(obj2);
	getch();
	
}
