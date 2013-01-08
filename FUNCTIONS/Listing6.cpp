#include<iostream.h>

double volume_func(double);

void main(void)
{
	double side,volume;

	cout<<"Enter a value for one side of a cube:";
	cin>>side;
	volume=volume_func(side);
	cout<<"volume of the cube with side "<<side<<" is "<<volume<<"\n";
}


double volume_func(double x)
{
	double v;
	v=x*x*x;
	return(v);
}

