/*
	Name: Sagar Giri
	Roll no. : 0205
	Date: 25-06-13
	Description: Program to sort numbers using "bubble sort" method.
*/
#include<stdio.h>
#include<conio.h>
#define SIZE 50

int main()
{
	int num[SIZE];
	int j,step,n,temp;
	
	printf("How many Numbers\n:?: ");
	scanf("%d", &n);
	
	printf("Enter the numbers:\n:");
	for(j=0;j<n;j++)
		{
			scanf("%d", &num[j]);
		}
		
	for(step=1;step<=(n-1);step++)
		{
			for(j=0;j<(n-step);j++)
				{
					if(num[j]>num[j+1])
					{
						temp=num[j];
						num[j]=num[j+1];
						num[j+1]=temp;
					}
				}
				
		}
	
	printf("\nSorted array is: \n");
	for(j=0;j<n;j++)
		{
			printf("%d \t", num[j]);
		}
	getch();
}

