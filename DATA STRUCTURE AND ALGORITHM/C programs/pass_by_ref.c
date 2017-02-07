#include<stdio.h>
#include<conio.h>
int inc(int*);
int main(void)
{
    int x=5;
    inc(&x);
    printf("%d",x);
    getch();
    return 0;
}
int inc(int*n)
{
    (*n)++;
    printf("%d\n",*n);
}
