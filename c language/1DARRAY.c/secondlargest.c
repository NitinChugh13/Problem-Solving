#include<stdio.h>
int main(){
     int size,max,smax,i;
     //printf("enter the number to be compared: ");
    //scanf("%d",&x);
     printf("enter the size of array: ");
     scanf("%d",&size);
     int arr[size];
     //printf("the numbers are : ");
     for( i=0;i<size;i++){
        printf("enter the element number %d:  ",i+1);
        scanf("%d",&arr[i]);
     } 
     max=arr[0];
          for(i=0;i<size;i++){
            if(max<arr[i]) {    
                smax=max;
                 max=arr[i];
            }
            
          }
          printf("the second largest number is :%d",smax);


             return 0;
}

