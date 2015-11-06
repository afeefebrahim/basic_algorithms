#include<stdio.h>
int array[100];
int i = 0;
void push(int); 
int pop(void);
int peek(void);
int size(void);
void is_empty(void);
main()
{
    int j;
    push(5);
    push(6);
    push(15);
    pop();
 //   pop();
//    printf("%d  \n",pop());
    for(j = 0; j <=i ;j++){
       printf("%d\n",array[j]);
    }
    printf("%d\n",peek());
    printf("%d\n",size());
    is_empty();
}
                
void push(int n)
{
    if(i >100){
          printf("stack is empty\n");
    }else{
          array[i++] = n;
    }

}
 
int pop(void)
{
   if(i <= 0){
         printf("stack is empty\n");
         return 0;
   }else{
        i--;
        return array[i--];
        
    }
}
 
int peek(void)
{
      if(i > 0)
         return array[i--];
      else
         printf("stack is empty");
}             
int size(void)
{
     return i;
}

void is_empty(void)
{
     if(i <= 0)
        printf("True\n");
     else
        printf("False\n");
}
