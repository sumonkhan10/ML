#include<iostream.h>

void hello_func(void);

void main(void)
{
	cout<<"Calling hello_func()\n";
	hello_func();
}

void hello_func(void)
{
	for(int i=0;i<5;i++)
		cout<<" Hello SUMI\n";
}