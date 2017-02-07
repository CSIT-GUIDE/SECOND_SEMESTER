#include<stdio.h>
#include<conio.h>
int fibo(int );
int main(void)
{
    int num;
    printf("Enter the number :");
    scanf("%d",&num);
    printf("The result is %d",fibo(num));
    getch();
    return 0;
}
int fibo(int num)
{
    int i;
    if(num==0||num==1)
          return num;
    else if (num>=2)
              i=(fibo(num-2)+fibo(num-1));
              return i;
}
