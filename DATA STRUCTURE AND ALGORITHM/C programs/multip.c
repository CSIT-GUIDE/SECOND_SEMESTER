#include<stdio.h>
#include<conio.h>
int mult(int,int);
int main(void)
{
    int a,b;
    printf("enter the first and second number:");
    scanf("%d%d",&a,&b);
    printf("The result is %d",mult(a,b));
    getch();
    return 0;
}
int mult (int a,int b)
{
    int i;
    if(b==1)
            return a;
    if(b>1)
    {
           i=(mult(a,b-1)+a);
           return i;
    }
}
