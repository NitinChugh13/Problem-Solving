#include<stdio.h>
#include<stdlib.h>
int main(){
    // int n;
    // printf("enter the size of array");
    // int arr[n];
    // // this is wrong method to allocate n numbers to an array
    // instead use DMA
    int*ptr=(int*)malloc(10*4);
    printf("%d",*ptr);
    //since i have not given any value 
    //malloc default value is garbage value 
    //calloc default value is 0

    return 0;
}