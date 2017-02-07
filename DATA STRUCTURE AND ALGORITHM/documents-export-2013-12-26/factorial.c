/*
	Name: Sagar Giri
	Date: 
	Description: Program to find the factorial using recursive function
*/

#include <stdio.h>
int fact(int );
main()
{
	int n;
	printf("Enter the number \n");
	scanf("%d",&n);
	printf("the factorial of the number %d is %d",n,fact(n));
	getch();
}
int fact (int n)
{
	if (n==0)
	return(1);
	else
	return(n*fact(n-1));
}
