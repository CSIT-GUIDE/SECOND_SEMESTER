#include<stdio.h>
#include<conio.h>
#define MAXITEMS 5
struct queue
{
 int items[MAXITEMS];
 int front, rear;
}q;
char empty(struct queue *pq)
{
 return ((pq->front==pq->rear)?'T':'F');
}
int remov (struct queue *pq)
{
 if  (empty(pq)=='T')
 { 
 printf("\nQueue Underflow\n");
 }
 if(pq->front==MAXITEMS-1)
pq->front=0;
else
(pq->front)++;
 return(pq->items[pq->front]);
}
int insert(struct queue *pq, int x)
{
 if(pq->rear==MAXITEMS-1)
 pq->rear=0;
else
(pq->rear)++;
if(pq->rear==pq->front)
{
 printf("\nQueue Overflow\n");
 return -1;
}
pq->items[pq->rear]=x;
 return 0;
}
int main(void)
{
    int val,queue[MAXITEMS],i=0,check;
    q.front=MAXITEMS-1;
    q.rear=MAXITEMS-1;
    char choice;
    do
    {
        printf("Enter\n1.Insert Into Queue\n2.Remove From Queue\n3.Print the total values listed in queue\n");
        choice = getch();
        if(choice=='1')
        {
                 printf("\nEnter the value to be stored in Queue:\n ");
                 scanf("%d",&val);
                 check=insert(&q,val);
                 if(check==-1)
                              printf("Queue already full");
        }
        if(choice=='2')
        {
                 if(empty(&q)=='F')
                 {
                                   val=remov(&q);-+
                                   printf("\nThe value removed from queue is %d\n",val);
                                   queue[i]=val;
                                   i++;
                 }
                 else
                     printf("\nQueue is already empty\n");
        }
        if(choice=='3')
        {
                 int j=0;
                 for(;j<i;j++)
                 {
                               printf("\n%d\t%d\n",j+1,queue[j]);
                 }
        }
    }while(choice!='3');
    getch();
    return;
}                 
                 
