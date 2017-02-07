#include<stdio.h>
#include<conio.h>
float factorial(float);
int main(void)
{
    float n;
    printf("Enter the number to find factorial:");
    scanf("%f",&n);
    printf("The factorial is %.2f",factorial(n));
    getch();
    return 0;
}
float factorial(float n)
{
    float x,y;
    if(n==0){
            return 1;
    }
    x=n-1;
    y=factorial(x);
    return(n*y);
}
