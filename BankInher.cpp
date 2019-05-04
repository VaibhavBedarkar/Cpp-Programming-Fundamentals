#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

class Bank_Account
{
	public:
		char ac_no[100],pass_wd[100];
		void Account_Create()
		{
          cout<<"\n ------------------------ \n";
		  cout<<"\n Welcome to XYZ bank \n";
		  cout<<"\n ------------------------ \n";
		  cout<<"\n Enter the account no.";
		  cin>>ac_no;
		  cout<<"\n Create Password";
		  cin>>pass_wd;
		}
	
};

class Bank_VerifyUser: public Bank_Account
{
	public:
		
};

class Login_Succ : public Bank_Account,public Bank_VerifyUser
{
	public:
		char vac_no[100],vpass_wd[100];
		void Account_Verify()
		{
		  cout<<"\n ------------------------ \n";
		  cout<<"\n Welcome to Login Portal \n";
		  cout<<"\n ------------------------ \n";
		  cout<<"\n Enter the account no.";
		  cin>>vac_no;
		  cout<<"\n Enter Password";
		  cin>>vpass_wd;
	    int v=strcmp(pass_wd,vpass_wd);
			if(v=0)
			{
			 cout<<"\n Login Successful";	
			 
			}
			else
			{
			 cout<<"\n Login Fail";
			}
		
		
		
		
		
		}
		int vu,vp;
		int Login_Status()
		{
		  vp =strcmp(pass_wd,vpass_wd);
		  vp =strcmp(pass_wd,vpass_wd);
			if(v=0)
			{
			 cout<<"\n Login Successful";	
			 cout<<"\n Balance is: Rs "<<Bal;	
			}
			else
			{
			 cout<<"\n Login Fail";
			 
			}
		}
};*/
 class Transact : public Bank_Account
 {     public:
		int User_Transact()
		{ 
			int Bal=0,ch,cr,db;
			char choice;
			do
			{
				cout<<"\n 1.Credit Money";
				cout<<"\n 2.Debit Money";
				cout<<"\n enter your choice ";
				cin>>ch;
				switch(ch)
				{
					case 1:
						cout<<"\n Enter amount to be credited";
						cin>>cr;
						Bal=Bal+cr;
						cout<<cr<<"Rs.Credited Successfully!!\n ";
						cout<<"\n Balance is: Rs "<<Bal;	
						break;
					case 2:
						cout<<"\n Enter amount to be debited";
						cin>>db;
						Bal=Bal-db;
						cout<<db<<"Rs.Debited Successfully!!\n ";
						cout<<"\n Balance is: Rs "<<Bal;
						break;
					default:break;
					
					
				}
				cout<<"\n Do You want to continue??";
				cin>>choice;
			}while(choice =='y');			
		}
		
 };
 
 int main()
 {
		Transact obj;
			obj.Account_Create();
			obj.Account_Verify();
			obj.User_Transact();
	     //obj.Account_Verify();
			
		getch();
}
