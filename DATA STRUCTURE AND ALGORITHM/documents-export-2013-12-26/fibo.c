/*
	Name: SAGAR GIRI
	Date: 29-06-13 
	Description: PROGRAM TO FIND THE FIBONACCI NUMBER USING RECURSIVE FUNCTION.
*/

#include <stdio.h>
int fib(int);
main()
{
	int fibo,n;
	printf("enter the number:\n?:\n");
	scanf("%d",&n);
	fibo = fib(n);
	printf("the %dth fibonacchi number is %d",n,fibo);
	getch();
}
int fib(int m)
{
	if (m==1) {
		return (1);
	}
	 else 
	 return (m + fib(m-1));
}
