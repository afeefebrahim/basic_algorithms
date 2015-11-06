#include<stdio.h>
#define MAX 10
void insert(void);
void delet(void);
void display(void);
int queue[MAX];
int rear =-1,front = 0;
void main()
{
     insert();
     insert();
     insert();
     delet();
     display();
}
void insert(void)
{
     int n;
     if((front == 0 && rear == MAX-1)||(front > 0 && rear == front-1))
           printf("queue is overflow");
     else{
          printf("enter the element");
          scanf("%d",&n);
          if(rear == MAX-1 && front > 0){
              rear = 0;
              queue[rear] = n;
          }
          else if(((rear == -1)&&(front == 0))||(rear != front-1 ))
              queue[rear++] = n;
     }
/*     printf("%d\t",rear);
     printf("%d\t",front);
     printf("%d\t",queue[2]);*/
}

void delet(void)
{
    int a; 
    if((front == 0) && (rear == -1 ))
         printf("queue is underflow");
    else if(front == rear){
         a = queue[front];
         rear = -1;
         front = 0;
     }
     else{
         if(front == MAX-1){
            a = queue[front];
            front = 0;
          }else{
     //        a = queue[front];
             front++;
         }
      }
      
 }

void  display(void)
{
    int i,j;
    if(front > rear){
      for(i =0;i <= rear;i++)
         printf("%d\t",queue[i]);
      for(j = front;j <=MAX-1;j++)
         printf("%d\t",queue[j]);
     printf("\n");
     printf("rear is at %d \n",rear);
     printf("front is at %d \n",front);
     }else{
         for(i= 0; i < rear; i++)
               printf("%d \t",queue[i]);
         printf("\n");
         printf("rear is at %d \n",rear);
         printf("front is at %d \n",front);
     }
}

      
     
           
    
       
          

