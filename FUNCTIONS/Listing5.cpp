#include<iostream.h>

void examp_func(int);


void main(void)
{
	int x=100;
	cout<<"Value of x before the function call:"<<x<<"\n";
	examp_func(x);
       
	cout<<"Value of x before the function call:"<<x<<"\n";
}


void examp_func(int x)
{
	x=x+1;
	cout<<"Value of x inside the function:"<<x<<"\n";
}


	