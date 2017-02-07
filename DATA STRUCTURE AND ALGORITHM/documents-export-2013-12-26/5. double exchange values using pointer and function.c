/* 5. Program to double the value using pointer and function. */

#include<stdio.h>
#include<conio.h>

void exchange_double(int *,int*);

int main()	{
	
	int a=21,b=12;
	
	printf("Before exchange a=%d and b=%d\n",a,b);
	
	exchange_double(&a,&b);
	
	printf("After exchange a=%d and b=%d",a,b);
}

	void exchange_double(int*x,int*y)	{
		
		int temp;
		temp=*x*2;
		*x=*y*2;
		*y=temp;
	}
				
//	Output
// 	Before exchange a=24 and b=12
//	After exchange a=24 and b=42
