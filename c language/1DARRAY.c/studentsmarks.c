#include<stdio.h>
int main(){
   int arr[5];
   for(int i=0;i<5;i++){
    printf("enter the marks of %d student : ",i+1);
    scanf("%d",&arr[i]);
   } 
   for(int i=0;i<=4;i++){
      if(arr[i]<35) 
    printf("%d ",i+1);
   }



    return 0;
}