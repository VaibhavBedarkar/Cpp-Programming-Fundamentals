#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

class SHand
{
	public:
		char str[100],str1[100],str2[100];
		void StLength()
		{
			int len;
			cout<<"\n Enter the String \n";
			cin>>str;
			len=strlen(str);			
			cout<<"The Length of string is :"<<len;
		}
		void StReverse()
		{
		   	cout<<"\n Enter the string to reverse";
		   	cin>>str;
		   	strrev(str);
		   	cout<<"After string reverse"<<str;
		
		}
		void StCompare()
		{
			int cmp;
			cout<<"\n Enter the First String :";
			cin>>str1;
			cout<<"\n Enter the Second String :";
			cin>>str2;
			cmp=strcmp(str1,str2);
			if(cmp==0)
			{
				cout<<"\n Strings are Equal \n";
							
			}
			else
			{
				cout<<"\n Strings are Not Equal \n";
			}
			
		}
		void StConCat()
		{
		    cout<<"\n Enter the First String :";
			cin>>str1;
			cout<<"\n Enter the Second String :";
			cin>>str2;	
			strcat(str1,str2);
			cout<<"\n After ConCat :"<<str1;			
		}
		void StCopy()
		{
			cout<<"\n Enter the First String :";
			cin>>str1;
		    strcpy(str,str1);
		    cout<<"\n After Copy :"<<str;		
			
		}
		
};

int main()
{
	SHand obj; 
	int ch;
	char choice;
	do
	{
		cout<<"\n 1.String reverse ";
		cout<<"\n 2.String Lenght ";
		cout<<"\n 3.String Compare";
		cout<<"\n 4.String Concate";
		cout<<"\n 5.String copy";		
		cout<<"\n Enter your choice(1-5) :";
		cin>>ch;
		switch(ch)
		{
			case 1:
				obj.StReverse();
				break;
			
			case 2:
				obj.StLength();
				break;
			
			case 3:
				obj.StCompare();
				break;
			
			case 4:
				obj.StConCat();
				break;
				
		    case 5:
				obj.StCopy();
				break;
				default : break;			
			
		}
		cout<<"\n Do you want to Continue (y/n):";
		cin>>choice;
	}while(choice=='Y');
	
	getch();
}
