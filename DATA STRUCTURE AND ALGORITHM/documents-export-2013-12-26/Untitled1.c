struct stack
{
char opstk[10];
int top;
};
struct stack s;

void push(struct stack *, char);
char pop(struct stack *);
int prec(char);

main(){

char c[20], post_str[20];
int i=0, j = 0;
char out;

s.top = -1;

printf("\n\tEnter the string: ");
gets(c);

for(i = 0; c[i] != '\0'; i++){

if((c[i] >= 'a' && c[i] <= 'z')||(c[i] >= 'A' && c[i] <= 'Z')||(c[i] >= '0' && c[i] <= '9')){

post_str[j++] = c[i];
//post_str[j] = '\0';
}

else if(c[i] == ' ')
continue;

else
{
if(s.top == -1)
push(&s, c[i]);

else{

//out = pop(&s);
if(prec(c[i]) <= prec(out)){




do{ 
push(&s, out);
post_str[j++] = pop(&s);
post_str[j] = '\0';
out=pop(&s);
}
while(prec(c[i]) <= prec(out) && s.top > -1);

push(&s, out);
push(&s, c[i]);
}
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

printf("\nYour answer is: ");

for(i = 0; post_str[i] != '\0'; i++)
printf("%c", post_str[i]);

}

void push(struct stack *ps, char op)
{

if(ps->top == 9){
printf("\n\t**Stack Overflow!");
exit(1);
}

ps->opstk[++ps->top] = op;
}

char pop(struct stack *ps)
{

if(ps->top == -1){

printf("\n\t**Stack Underflow!");
exit(1);
}

return (ps->opstk[ps->top--]);
}

int prec(char c){

switch(c)
{ 
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
