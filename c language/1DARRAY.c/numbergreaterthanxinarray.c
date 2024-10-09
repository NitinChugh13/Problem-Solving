#include<stdio.h>
int main(){
     int size,x,count=0;
     printf("enter the number to be compared: ");
     scanf("%d",&x);
     printf("enter the size of array: ");
     scanf("%d",&size);
     int arr[size];
     //printf("the numbers are : ");
     for(int i=0;i<size;i++){
        printf("enter the element number %d:  ",i+1);
        scanf("%d",&arr[i]);
     }
      printf("the numbers are : ");
     
      for(int i=0;i<size;i++){
          if(arr[i]>x) {
            count++;
          printf("%d\n ",arr[i]);
          }
     }  printf("the number of elements greater than %d are %d",x,count);



    return 0;
}