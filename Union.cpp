#include<iostream>
#include<conio.h>
using namespace std;
union Data
{
	int rollno;
	char name[10];
	float cgpa; 	
};
int main()
{
	union Data obj;
	cout<<"\n Enter the Name :";
	cin>>obj.name;
	cout<<"\n Name :"<<obj.name;
	
	cout<<"\n Enter the Rollno : ";
	cin>>obj.rollno;
	cout<<"\n Roll no: "<<obj.rollno;
	
	cout<<"\n Enter your CGPA :";
	cin>>obj.cgpa;
	cout<<"\n CGPA :"<<obj.cgpa;
	
	getch();
}
