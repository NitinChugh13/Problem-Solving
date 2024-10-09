#include<stdio.h>
int main(){
     int size,count=0,x,i,j,k;
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
        for(k=j+1;k<size;k++){
          if(arr[i]+arr[j]+arr[k]==x){
            count++;
           printf("(%d,%d,%d)\n",arr[i],arr[j],arr[k]);
          }
        }
     } 
     }
     
         printf("the number of pairs are :%d",count);
     return 0;
}

