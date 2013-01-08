#include<iostream.h>

inline double square(double n)
{
 return n*n;
}

void main(void) 
{
double a=10.6;
double b;
cout<<"Value of a = "<<a<<"\n";
b=square(a++);
cout<<"Value of  a*a ="<<b<<"\n";
cout<<"Final value of a ="<<a<<"\n";
}