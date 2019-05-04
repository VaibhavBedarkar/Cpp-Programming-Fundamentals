#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
int main()
{
	char data[100];
	
	//Open file
	
	ofstream input;
	input.open("NewFile.txt");
	
	//Write data into file
	
	cout<<"Enter Your Name \n";
	cin.getline(data,100);
	input<<data;
	//ignore scanning
	cout<<"\n eNTER your Age :";
	cin>>data;
	cin.ignore();
	//close file----------------------------
	input<<data;
	input.close();
	
	//reopen file---------------------------------
	ifstream output;
	output.open("NewFile.txt");
	//read file-----------------------------------------
	cout<<"Reading from the file \n ";
    output>>data;
	
	cout<<data<<"\n";
	//close file ---------------------------------------------
	output.close();
	getch();	
}
