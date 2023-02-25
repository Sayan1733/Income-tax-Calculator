#include<iostream>
#include<conio.h>
//income tax calculator
using namespace std;
int main()
{
	int a,t;
	cout<<"Enter The Income Amount:";
	cin>>a;
	
	if(a<=300000)
	{
		cout<<"There Will be no tax";
	}
	else if(a>300000 && a<=600000)
	{
		t=(a-300000)*0.05;
		cout<<"The tax amount to be paid as tax: "<<t;
	}
	else if(a>600000 && a<=900000)
	{
		
		t=15000+(a-600000)*0.1;
		cout<<"The tax amount to be paid as tax: "<<t;
	}
	else
	{
		t=45000+(a-900000)*0.15;
		cout<<"The tax amount to be paid as tax: "<<t;
	}
	
	getch();
	return 0;
}
