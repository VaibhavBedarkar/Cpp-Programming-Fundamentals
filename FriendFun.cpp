#include<iostream>
#include<conio.h>
using namespace std;
class add
{
	public:
		int a,b;
		void get()
		{
			cout<<" \n ENTER THE VALUE OF 'A'";
			cin>>a;
			
			cout<<" \n ENTER THE VALUE OF 'B'";
			cin>>b;
			
	    }
				
	private:
		friend float mean(add d)
		{
			return (d.a+d.b)/2;	
			
		}
		
	
};

int main()
{
	add obj;
	obj.get();
	cout<<"\n Mean of the values is:"<<mean(obj);
	getch();
	
}
