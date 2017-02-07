/* 6. Program to calculate sum using double pointer and function.*/

#include<stdio.h>

int calculate(int **,int);

void main()	{
	
	int a=5,b=10;
	int *p=&a;
	int result;
	
	result=calculate(&p,b);
	
	printf("The final result is %d",result);
}
	int calculate(int **p,int q)	{
		
		int sum=0;
		sum=sum+(**p)*(**p);
		sum=sum+q*q;
		return(sum);
	}
	
//	Output
//	The final result is 125
