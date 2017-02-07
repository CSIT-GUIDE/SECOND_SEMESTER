#include<stdio.h>
#include<conio.h>
int main(void)
{
    int i=3;
    int *j=&i;
    int **k=&j;
    int ***l=&k;
    printf("value of i=%d\n",**k);
    printf("value of j=%d\n",*k);
    printf("vaue of k=%d\n",k);
    printf("address of i=%u\n",*(&(*k)));
    printf("address of j=%u\n",k);
    printf("address of j=%u\n",*(&k));
    printf("address of k=%u\n",&k);
    printf("address of l=%u\n",l);
    printf("address of l=%u\n",&l);
    printf("address of l=%u\n",
    
    
    getch();
    return 0;
}
