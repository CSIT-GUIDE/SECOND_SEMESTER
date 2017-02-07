#include <stdio.h>

struct stack {
	
	char opstk[10];
	int top;
};
struct stack s;											

void push(struct stack *, char);
char pop(struct stack *);
int Prec(char);

main(){
	
	char c[20], post_str[20];
	int i, j = 0, str_len;
	
	s.top = -1;
	
	printf("\n\tEnter the string: ");
	gets(c);
	
	for(i = 0; c[i] != '\0'; i++){
		
		if(c[i] >= 48 && c[i] <= 57){
			
			post_str[j++] = c[i];
			post_str[j] = '\0';
		}
		else if(c[i] == ' ')
			continue;
		else{
			
			if(Prec(c[i]) > Prec(s.opstk[s.top]) || s.top == -1)
				push(&s, c[i]);
			else if(Prec(c[i]) <= Prec(s.opstk[s.top])){
				
				do{
					post_str[j++] = pop(&s);
					post_str[j] = '\0';
				}
				while(Prec(c[i]) <= Prec(s.opstk[s.top]) && s.top > -1);
				
				push(&s, c[i]);
			}
		}
	}
	
	if(c[i] == '\0' || s.top != -1){
				
		do{
			post_str[j++] = pop(&s);
			post_str[j] = '\0';
		}
		while(s.top != -1);
	}

	printf("\n\tYour answer is: ");
	for(i = 0; post_str[i] != '\0'; i++)
		printf("%c", post_str[i]);
}

void push(struct stack *pS, char op){
	
	if(pS->top == 9){
		
		printf("\n\t**Stack Overflow!");
		exit(1);
	}
	
	pS->opstk[++pS->top] = op;
}

char pop(struct stack *pS){
	
	if(pS->top == -1){
		
		printf("\n\t**Stack Underflow!");
		exit(1);
	}
	
	return pS->opstk[pS->top--];
}

int Prec(char c){
	
	switch(c){
		
		case '+':
		case '-':
			return 0;
		case '*':
			return 1;
		case '/':
			return 2;
		case '$':
			return 3;
	}
}
