#include<iostream.h>

#define SQUARE(x) x*x

void main(void) 
{
double a=10.6;
double b;
cout<<"Value of a = "<<a<<"\n";
b=SQUARE(a);
cout<<"Value of  a*a ="<<b<<"\n";
a++;
cout<<"Final value of a ="<<a<<"\n";
//b=SQUARE(a++);
//cout<<"Final value of a ="<<a<<"\n";
}