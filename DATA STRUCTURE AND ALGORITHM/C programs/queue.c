#include<stdio.h>
#include<conio.h>
# define MAXITEMS 5
/*char empty(struct queue* pq){
     return((pq->front==pq->rear)?'T':'F');
]
int remove(struct queue* pq){
    if(empty(pq)){
          printf("underflow queue");
          exit(1);
    }
    if(pq->front==MAXITEMS-1)
         pq->front=0;
    else
        (pq->front)++;
        return(pq->items[pq->front]);                    
}
    
void insert(struct queue* pq,int x){
     if(pq->rear==MAXITEMS-1)
            pq->rear=0;
     else
            (pq->rear)++;
     if(pq->rear==pq->front)
     {
            printf("queue overflow");
            exit(1);
     }
     pq->items[pq->rear]=x;
     return;
}                      
struct queue{
       int items[MAXITEMS];
       int front,rear;
       }q;*/
int main(void)
{
    int choice;
   printf("what you want to do in queue");
   printf("\n1.Do you want to insert\n2.Do you want to remove\n");
   scanf("%d",&choice);
}
       
       
