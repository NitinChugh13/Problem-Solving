#include<stdio.h>
int main(){
    int size,esum=0,osum=0;
    printf("enter the size of array::");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        printf("enter the %d element of array:",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<size;i++){
        if(i%2==0){
            esum=esum+arr[i];
        }
        else {
            osum+=arr[i];
        }
    }
    printf("the difference between even and odd index sum is :%d ",(esum-osum));

    return 0;
}