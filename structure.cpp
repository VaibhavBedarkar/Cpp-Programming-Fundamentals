#include<iostream>
#include<conio.h>
using namespace std;
struct Detail 
{
	int Roll_No;
	char Name[10];
	float perc;
};
int main()
{
	struct Detail obj;
	cout<<"\n Enter the Name :";
	cin>>obj.Name;
	cout<<"\n Enter the RollNo :";
	cin>>obj.Roll_No;
	cout<<"\n Enter the CGPA :";
	cin>>obj.perc;
	cout<<"\n Name :"<<obj.Name;
	cout<<"\n Roll No:"<<obj.Roll_No;
	cout<<"\n CGPA :"<<obj.perc;
	getch();
}
