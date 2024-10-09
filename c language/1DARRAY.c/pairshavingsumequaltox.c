#include<stdio.h>
int main(){
     int size,count=0,x,i,j;
     printf("enter the number to be compared: ");
    scanf("%d",&x);
     printf("enter the size of array: ");
     scanf("%d",&size);
     int arr[size];
     //printf("the numbers are : ");
     for( i=0;i<size;i++){
        printf("enter the element number %d:  ",i+1);
        scanf("%d",&arr[i]);
     } 
     for(i=0;i<size;i++){
     for(j=i+1;j<size;j++){
          if(arr[i]+arr[j]==x){
            count++;
           printf("(%d,%d)\n",arr[i],arr[j]);
          }

     } 
     }
     
         printf("the number of pairs are :%d",count);
     return 0;
}

