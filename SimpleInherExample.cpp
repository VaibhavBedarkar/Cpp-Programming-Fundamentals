#include<iostream>
#include<conio.h>

using namespace std;
class GetDetails
{
	public:
		int Roll;
		char name[100];
		int age;
		void GetMethod()
		{
		  cout<<"\n--------------------\n";
		  cout<<"Enter the RollNo.\n";	
		  cin>>Roll;
		  cout<<"Enter Your Name \n";
		  cin>>name;
		  cout<<"Enter Your Age \n";
		  cin>>age;
		 			
		}
};

class ShowDetails: public GetDetails
{
	public:
		void ShowMethod()
		{
		cout<<"\n RollNo:";
		cout<<Roll;
		cout<<"\n Name:";
		cout<<name;
		cout<<"\n Age\n";
		cout<<age;
	    }
};

int main()
{
	ShowDetails obj;
	obj.GetMethod();
	obj.ShowMethod();
	getch();
}
