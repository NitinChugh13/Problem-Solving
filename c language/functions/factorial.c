#include<stdio.h>
int factorial(int n){
    int product =1;
    for(int i=1;i<=n;i++){
        product =product*i;
        printf("the factorial of %d is %d\n ",i,product);
    }
    return n; 
}
int main(){
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    printf("the factorial deries is :\n");
    factorial(n);
    return 0;
}