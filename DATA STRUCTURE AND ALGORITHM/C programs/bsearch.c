#include<stdio.h>
#include<conio.h>
int bsearch(int a[],int low,int high,int n);
int main(void)
{
    int a[6]={1,2,5,7,9,21};
    int n,result;
    printf("Enter the number you want to search");
    scanf("%d",&n);
    result=bsearch(a,0,6,n);
    if(result==-1)
                  printf("not found");
    else{
         printf("number found at the position %d",result+1);
    }
    //return 0;
    getch();
}
int bsearch(int a[],int low,int high,int n)
{
    int mid,x;
    if(low>high)
         return -1;
    mid=(low+high)/2;
    if(n==a[mid])
         return(mid);
    if(n>a[mid])
         return(bsearch(a,mid+1,high,n));
    if(n<a[mid])
         return(bsearch(a,0,mid-1,n));
}
    
    
