#include<iostream.h>

void hello_func(int);

void main(void)
{
	cout<<"Calling hello_func()\n";
	hello_func(4);
}

void hello_func(int n)
{
	for(int i=0;i<n;i++)
		cout<<" Hello SUMI\n";
}