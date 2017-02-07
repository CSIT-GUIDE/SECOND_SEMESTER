#include<stdio.h>
#include<conio.h>
#include<math.h>
int moves;
void transfer(int n,char from,char to,char temp);
int main(void)
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    transfer(n,'A','C','B');
     moves=pow(2,n)-1;
     printf("No.of moves=%d\n",moves);
    getch();
}
void transfer(int n,char from,char to,char temp)
{
     if(n>0)
     {
            transfer(n-1,from,temp,to); F,A,T
            printf("Move disk %d from %c to %c\n",n,from,to);
            transfer(n-1,temp,to,from); A,T,F
           
     } 
    
}
