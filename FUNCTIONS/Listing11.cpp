#include<iostream.h>

unsigned long left_func(unsigned long,unsigned);
char *left_func(char *,unsigned);

void main(void)
{
	unsigned long num=12345;

	char *name="BANGLADESH";
	unsigned n;
	for(n=1;n<=5;n++)
		cout<<left_func(num,n)<<"\n";
	cout<<"\n";
	//for(n=1;n<=10;n++)
		//cout<<left_func(name,n)<<"\n";
}



unsigned long left_func(unsigned long num,unsigned n)
{
	unsigned digits=1;
	unsigned long nn=num;
	if(n==0 || num==0)
		return 0;
	while(nn/=10)
		digits++;
	if(digits > n)
	{
		n=digits - n;
		while(n--)
			num/=10;
		return num;
	}
	else
		return num;
}

