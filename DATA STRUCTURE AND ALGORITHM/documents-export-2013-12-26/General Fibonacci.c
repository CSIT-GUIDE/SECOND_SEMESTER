#include <stdio.h>
int gfib(int, int,int);
main()
{
	int f0,f1,n;
	
	printf("\nEnter the 1st term i.e. f0\n");
	scanf("%d",&f0);
	printf("\nEnter the 2nd term i.e. f1\n");
	scanf("%d",&f1);
	printf("Enter the nth term ");
	scanf("%d",&n);
	
	printf("The nth term for the f0:%d and f1:%d is %d",f0,f1,gfib(f0,f1,n));
	getch();
}

int gfib(int f0,int f1,int n)
{
	if(n==0)
	return(f0);
	else if (n==1)
	return(f1);
	int x=gfib(f0,f1,n-1);
	int y=gfib(f0,f1,n-2);
	
	return(x+y);
}
