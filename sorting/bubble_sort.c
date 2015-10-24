#include<stdio.h>
void bubble(int array[]);
main()
{
    int array[5];
    int i;
    printf("enter the array element\n");
    for (i=0; i<6; i++)
       scanf("%d",&array[i]);
    bubble(array);
    for(i=0; i< 6;i++)
       printf("%d\t",array[i]);
   
}
void bubble(int array[])
{
     int i,j,temp;
     for(i=0; i< 6; i++){
        for(j=0;j < 6-i;j++){
              if(array[j] > array[j+1]){
                     temp = array[j];
                     array[j] = array[j+1];
                     array[j+1] = temp;
              }
        }
     }
     
}

      
