#include<stdio.h>
void selection(int arr[],int n){
    int min,temp;
    for(int i=0; i<n-1;i++){
        min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
    }
    
}
int main(){
    int n;
    printf("Enter the size of array");
    scanf("%d",&n);
    int arr[n];
    printf("Enter element in the array");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Original array is: \n");
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    printf("Array after sorting is: \n");
    selection(arr,n);
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}