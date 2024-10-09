#include<stdio.h>
int main (){
    int n;
    printf("enter the size of array:");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        printf("enter the element %d of array:",i+1);
        scanf("%d",&a[i]);
    }
    int l=0,r=n-1;
    while(l<=r){
        int temp=a[l];
        a[l]=a[r];
        a[r]=temp;
        l++;
        r--;
        
        
}
printf("reversed array is :\n");
for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    
    return 0;
}