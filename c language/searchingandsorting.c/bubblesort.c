#include<stdio.h>//bubble sort
void bubble_sort(int a[],int n){
    int i,j,temp,flag;
    for(i=0;i<n-1;i++){
    flag=0;
    for(j=0;j<(n-1-i);j++){
        if(a[j]>a[j+1]){
        temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
        flag=1;
        }
    }
    if(flag==0){
        break;
    }
}

}
int main (){
int n,i,j;
printf("enter the size of array: ");
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++){
    printf("enter the %d element of array: ",i+1);
    scanf("%d",&a[i]);
}
bubble_sort(a,n);
printf("the sorted array is :\n");
for(i=0;i<n;i++){
    printf("%d ",a[i]);
}
return 0;

}