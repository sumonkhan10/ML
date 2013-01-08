#include<iostream.h>

int sum_func(int *,int);//function prototype


void main(void)
{
	int sum=0;
	int num[10]={1,2,3,4,5,6,7,8,9,10};

	sum=sum_func(num,10); //function call
	cout<<"Sum of integers from 1 to 10 is = "<<sum<<"\n";
}


int sum_func(int *p,int n)//function definition heading
{
	int sum=0;
	for(int i=0;i<n;i++)
		sum=sum+p[i];
	return(sum);
}