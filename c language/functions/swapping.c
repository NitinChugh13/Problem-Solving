#include<stdio.h>//pass by reference not by values
int swap(int* x,int* y){
    int temp=*x;
    *x=*y;
    *y=temp;    
}
int main(){
    int a,b;
    printf("enter the first number: ");
    scanf("%d",&a);
    printf("enter the second number: ");
    scanf("%d",&b);
    swap(&a,&b);
    printf("a=%d and b=%d",a,b);
    return 0;
}
