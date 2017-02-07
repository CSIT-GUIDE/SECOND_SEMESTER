#include<stdio.h>
#include<conio.h>
int main(void)
{
    int i=3;
    int *j;
    j=&i;
    printf("\naddress of i is %u",&i);
    printf("\naddress of j is %u",j);
    printf("\naddress of j is %u",*j);
    printf("\nvalue of i %d",i);
    printf("\nvalue of i %d",*(&i));
    printf("\nvalue of i %d",*j);
    getch();
    return 0;
}
    
