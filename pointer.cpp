#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int num,i;
		
	cout<<"\n Enter the no of student :";
	cin>>num;
	
	float* ptr;
	ptr = new float[num];
	
	for(i=0;i<num;++i)
	{
	 cout<<"\n Student "<<i+1<<"  ";
	 cin>>*(ptr+i);
	}

    for(i=0;i<num;++i)
    {
	 cout<<"\n Student "<<i+1<<" "<<*(ptr+i);
	}

 delete []ptr;
getch();
}
