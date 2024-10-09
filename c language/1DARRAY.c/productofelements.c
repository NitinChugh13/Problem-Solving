#include<stdio.h>
int main() {
    int size,product=1;
    printf("enter the size of array: ");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        printf("enter the element number %d of array ",i+1);
        scanf("%d",&arr[i]);
    }for(int i=0;i<size;i++){
        product=product*arr[i];
    }
    printf("the product of elements in given array is : %d",product);
    return 0;
}