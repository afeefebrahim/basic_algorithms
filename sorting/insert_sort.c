#include<stdio.h>
void insert(int array[10]);
main()
{
     int a[10],i;
     printf("enter the array\n");
     for(i = 0; i<10; i++)
         scanf("%d ",&a[i]);
     insert(a);
     printf("sorted array is\n");	
    
     for(i=0;i<10;i++)
         printf("%d\n",a[i]);

}

void insert(int array[10])
{
   int i,j,temp;
     for(i=1;i < 10;i++){
       j =i;
       while(j >0 &&(array[j] < array[j-1])){
                temp = array[j];
                array[j] = array[j-1];
                array[j-1] = temp;
	         j--;
         }
   }
}
