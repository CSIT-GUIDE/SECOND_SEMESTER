/*
	Name: Sagar Giri
	Date:
	Description: Program to Multiply two number using recyrsive function
*/

#include <stdio.h>
int mult(int , int );
main()
{
	int a,b;
	printf("\n\nEnter the 2 numbers :\n");
	scanf("%d%d",&a,&b);
	printf("\n\nThe Multiplication of two numbers using recursion is %d",mult(a,b));
}
int mult(int a, int b)
{
	int x;
	if (a==1)
	return(b);
	
	else if (b==1)
	return(a);
	
	else
	x=mult(a,b-1);
	return(a+x);
} 
