#include<stdio.h>
#include<conio.h>
#include<string.h>
struct stack	// DATA STRUCTURE OF STACK TYPE TO HOLD STRING TYPE VALUES
{
       	char name[20];
       	int top ;
};
void push(struct stack* s, char n)	// TO PUT THE VALUES IN THE STACK
{   
    	s->top++;
    	s->name[s->top]=n;
    
}
char pop(struct stack* s)		// TO TAKE AND REMOVE THE VALUES FROM THE STACK
{
   	char result=s->name[s->top--];
     	return result;
}
int main (void)
{
    	struct stack s;
    	s.top=-1;
   	char name[20], value;
    	printf("Enter your Name: ");
    	gets(name);
    	int i;
    	for (i=0;i<strlen(name);i++) 	// LOOP TO PUT CHARACTER IN STACK FROM GIVEN STRING 
    	{
        		push(&s,name[i]);	// WHERE TO PUT, WHAT TO PUT
    	}
   	printf("Your name in reverse is : ");
    	while(s.top!=-1)
    	{
                 	 value=pop(&s);
                  	printf("%c",value);
    	}
    	getch();
}
