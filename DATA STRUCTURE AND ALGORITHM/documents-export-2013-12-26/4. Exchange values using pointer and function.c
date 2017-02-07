/* 4. Program to exchange values using pointer and fucntion. */

#include<stdio.h>
#include<conio.h>


void exchange(int*,int*);

int main()

{
	int x=5;
	int y=15;
	
	printf("Befor exchage x=%d and y=%d\n",x,y);
	
	exchange (&x,&y);
	
	printf("After exchange x=%d and y=%d\n",x,y);

	getch();
	
	}
	
	void exchange(int *a,int *b)
	
	{
		int temp;
		
		temp=*b;
		*b=*a;
		*a=temp;
		
	}
	
//	Output
// 	Before exchange x=5 and y=15
// After exchage x=15 and y=5	
	

