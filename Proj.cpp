#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

class BankAccount
{
	public:
		void Create()
		{
		 public:
				int ac_no[10],Mobile[10];
			 char name[10],Pass_wd[10];
			 cout<<"\n --------------------------- \n";
			 cout<<"\n         Create User \n";
			 cout<<"\n --------------------------- \n";
			 cout<<"\n Enter the Name of User :\n";
			 cin>>name;
			 cout<<"\n Enter the Mobile no.: \n";
			 cin>>Mobile;
			 cout<<"\n Enter the Account no.: \n";
			 cin>>ac_no;
			 cout<<"\n Create Password:  ";
			 cin>>Pass_wd;
			 cout<<"\n --------------------------- \n";
			 cout<<"\n User Created Successfully !!!";
			 cout<<"\n --------------------------- \n";
			
		} 
};

class Verify: public BankAccount
{
	public:
		void verify_user()
		{
			public:
				
			int acmp,pcmp,lac_no[10];
			 char lPass_wd[10];
			 cout<<"\n --------------------------- \n";
			 cout<<"\n |        LOGIN MENU \n       |";
			 cout<<"\n --------------------------- \n";
			 cout<<"\n Enter the Account no.: \n";
			 cin>>lac_no;
			 cout<<"\n Enter Password:  ";
			 cin>>lPass_wd;
						
			acmp=strcmp(lac_no,ac_no);
			pcmp=strcmp(lPass_wd,Pass_wd);
			
			if(acmp==0 && pcmp==0)
			{
			 cout<<"\n --------------------------- \n";
			 cout<<"\n |     Login Successful  | \n";
			 cout<<"\n --------------------------- \n";
			 int flag=1;
			}
			else
			{
		     cout<<"\n --------------------------- \n";
			 cout<<"\n |     Login Failed      | \n";
			 cout<<"\n --------------------------- \n";
			 	
			}
			
		}
		
};

/*class transaction:public Verify
{
	void addmoney()
	{
		if(flag==1)
		{
		  	
			
			
		}
		
	
	}
	
	void debitmoney

};*/

int main()
{
	Verify obj;
	obj.Create();
	obj.verify_user();
	getch();
}
