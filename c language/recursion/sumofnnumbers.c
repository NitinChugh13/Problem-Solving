#include<stdio.h>
int sum(int n){
    if(n==1){
        return 1;
    }
    else {
        return sum(n-1)+n;
    }
}
int main(){
    int n;
    printf("enter the number of terms :");
    scanf("%d",&n);
    int a=sum(n);
    printf("the sum of first %d numbers is :%d",n,a);
    return 0; 
}