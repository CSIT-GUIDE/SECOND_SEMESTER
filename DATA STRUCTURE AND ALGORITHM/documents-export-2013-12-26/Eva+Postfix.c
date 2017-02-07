/*
	Name: Sagar Giri
	Roll No : 205
	Date: 16-07-13
	Description: Program To Calculate The Postfix OPeration
*/

#include <stdio.h>

struct stack{
	int opndstk[10];
	int top;
};

void push(struct stack *, int);
int pop(struct stack *);

main(){
	
	struct stack s;
	char c[100], answer, ans;
	int i, num1, num2, temp;
	s.top = -1;
	
		printf("\nEnter the valid Postfix Operation :");
		gets(c);
		
		for(i = 0; c[i] != '\0'; i++){
			
			if(c[i] >= 48 && c[i] <= 57)
				push(&s, c[i] - 48);
			else if(c[i] == 32)
				continue;	
			else{
				num2 = pop(&s);
				num1 = pop(&s);
					
				switch(c[i]){
					case 42:
						temp = num1 * num2;
						break;
					case 43:
						temp = num1 + num2;
						break;		
					case 45:
						temp = num1 - num2;
						break;	
					case 47:
						temp = num1 / num2;
						break;
					case 36:
						temp = pow(num1, num2);
						break;	
				}
				push(&s, temp);
			}
		}
		
		printf("\n\tAnswer =  %d \n\n", s.opndstk[0]);
		s.top = -1;
		
}
void push(struct stack *pS, int data){
	
	if(pS->top == 9){
		printf("\n\tStack Overflow!\n");
		exit(1);
	}
	
	pS->opndstk[++pS->top] = data;
}
int pop(struct stack *pS){
	
	if(pS->top == -1){
		printf("\n\tStack Underflow!\n");
		exit(1);
	}
	
	return pS->opndstk[pS->top--];
}

