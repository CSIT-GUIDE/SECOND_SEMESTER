/* 1. Program to show simple pointer operations. */

#include<stdio.h>
#include<conio.h>

int main()
{
	int a=5;
	int *p;
	double x=6.3;
	double *q;
	
	p=&a;
	q=&x;
	
	printf("The value at address %u is %d\n",p,*p);
	printf("The value at address %u is %g",q,*q);
	getch();
}

// 	Output 
//	The value at address 2293200 is 5
//	The value at address 2293088 is 6.3

