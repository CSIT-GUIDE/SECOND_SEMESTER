/* 2. Program to utilize double pointer. */

#include<stdio.h>
#include<conio.h>

int main()
{
	int a=50;
	
	int *p,**q;
	
	p=&a;
	q=&p;
	
	printf("The value at address %u is %d",*q,**q);
	
	getch();
}

//	Output
// 	The value at address 2293100 is 50
