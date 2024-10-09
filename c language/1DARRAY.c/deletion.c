#include<stdio.h>//deletion of element
int main(){
    int size,position; 
    printf("enter the size of array::");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        printf("enter the %d element of array: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("enter the position at which the element is deleted: ");
    scanf("%d",&position);
    if(position<0||position>size){
        printf("invalid position");
        return 0;
    }
    for(int i=position;i<size;i++){
        arr[i]=arr[i+1];
    }
    size--;
    printf("the array after deletion is : \n");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");

    return 0;
}