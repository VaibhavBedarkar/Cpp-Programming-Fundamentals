#include<iostream>
#include<conio.h>
using namespace std;
class CreateUser
{
	public:
	char Email_Id[30];
	char Pass_Wd[10];
	char User_Name[10];
	
		char Profile()
		{
			cout<<"\n ---------------------------------\n";
			cout<<"\n Create User Profile";
			cout<<"\n ---------------------------------\n";
			cout<<"\n Enter the Name of User  :";
			cin>>User_Name;
			cout<<"\n Enter your Email :";
			cin>>Email_Id;
			cout<<"\n Create Password :";
			cin>>Pass_Wd;
			cout<<"\n User Created Successfully :)";
			cout<<"\n ---------------------------------\n";
		}
};

class VerifyUser 
{
	public:
	char VEmail_Id[30];
	char VPass_Wd[10];
	
		char Login()
		{
			cout<<"\n ---------------------------------\n";
			cout<<"\n Welcome to User Login Menu";
			cout<<"\n ---------------------------------\n";
			cout<<"\n Enter your Email :";
			cin>>VEmail_Id;
			cout<<"\n Enter Password :";
			cin>>VPass_Wd;
		}
};

class Logic : public CreateUser,public VerifyUser 
{
	public:
	int ln()
	{
	if(User_Name==VEmail_Id && Pass_Wd==VPass_Wd)
	{
		cout<<"\n--------------------------";
		cout<<"\n Login Successful !!!";
		cout<<"\n--------------------------";		
	}
	else
	{
		cout<<"\n--------------------------";
		cout<<"\n Login Failed !!!";
		cout<<"\n--------------------------";	
	}
   }
};

int main()
{
	Logic obj;
	obj.Profile();
	obj.Login();
	obj.ln();
	getch();	
}
