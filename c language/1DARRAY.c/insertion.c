#include<stdio.h>//insertion ofelement
int main(){
    int size,position,element;
    printf("enter the size of array::");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        printf("enter the %d element of array: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("enter the position into which the element is inserted: ");
    scanf("%d",&position);
    if(position<0||position>size){
        printf("invalid position");
        return 0;
    }
    printf("enter the element to be inserted:");
    scanf("%d",&element);
    for(int i=(size-1);i>=position;i--){
        arr[i+1]=arr[i];
    }
    arr[position]=element;
    size++;
    printf("the array after insertion is : \n");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");

    return 0;
}