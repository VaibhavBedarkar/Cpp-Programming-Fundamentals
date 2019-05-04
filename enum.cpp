#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	enum year{Jan,Feb,Mar,April,May,June,July,August,Sept,Oct,Nov,Dec};
	enum year curr;
	curr=April;
	
	cout<<"\n April is "<<curr+1<<" month of year";
	getch();
}
