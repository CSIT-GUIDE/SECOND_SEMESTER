#include <stdio.h>
int factorial(int);
main()
{
	int n,t;
	printf("Enter the element");
	scanf("%d",&n);
	int fact = factorial(n);
	printf("the factorial of %d is %d",n,fact);
	getch();
}
int factorial(m)
{
	if (m==0){
		return(1);
	}
	else {
		return(m*factorial(m-1));
	}
}
