#include<stdio.h>
int factorial(int n){
    if(n==0||n==1)return 1;
    else {
        return n*factorial(n-1);
    }
}
int main(){
    int n;
    printf("enter the number");
    scanf("%d",&n);
    printf("factorial of %d numbers are :\n",n);
    for(int i=1;i<=n;i++){
        printf("%d\n",factorial(i));
    }
    return 0;
}