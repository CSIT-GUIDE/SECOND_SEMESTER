
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#define MAX 10
struct stack {
	int item[MAX];
	int top;
};
void push(struct stack *,int);		
int pop(struct stack *);
void main()	 						
{
	
	int i,choice,element;
	struct stack s;
	s.top = -1;
	
	do{

		printf("Enter the code for the operation\n");
		printf("1 to push\n\n"
			   "2 to pop \n\n"
			   "3 to exit\n\n");
			   
		scanf("%d",&choice);
			switch(choice)
			{ 
				case 1:
					printf("enter the element to push:\n:?:");
					scanf("%d",&element);
					push (&s,element);
					break;
				
				case 2:
					i = pop(&s);
					printf("\n\nthe poped item is %d\n\n",i);
					break;
			}
	}while (choice != 3);
}
void push(struct stack *ps,int data)
{
	if (ps->top==(MAX-1)) 
	{
		printf("stack overflow");
		getch();
		exit(1);
	}
	ps -> top++;
	ps -> item[ps->top] = data;
}
int pop(struct stack *ps)
{
	if (ps->top==-1)
	{
		printf("stack Underflow");
		getch();
		exit(1);
	}
	return (ps->item[ps->top--]);
}
