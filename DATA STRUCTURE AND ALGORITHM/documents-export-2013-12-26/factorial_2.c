#include <stdio.h>
int fact(int );
main()
{
	int n;
	printf("Enter the number \n");
	scanf("%d",&n);
	printf("the factorial of the number of is %d",fact(n));
	getch();
}
int fact (int n)
{
	if (n==0)
	return(1);
	else
	return(n*fact(n-1));
}
