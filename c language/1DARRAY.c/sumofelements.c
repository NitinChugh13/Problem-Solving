#include<stdio.h>
int main(){
    int size,sum=0;  
    printf("enter the size of array : ");
    scanf("%d",&size);
        int arr[size];
    for(int i=0;i<size;i++){
        printf("enter the element number %d : ",i+1 );
        scanf("%d",&arr[i]);
    } for(int i=0;i<=(size-1);i++){
           sum=sum+arr[i];
    } 
    printf(" the sum of elements of given array is: %d ",sum);
    return 0;
}