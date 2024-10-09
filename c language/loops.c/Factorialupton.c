//to print the factorial of a number upto n
#include<stdio.h>
int main(){
    int n;
     int factorial=1;
    printf("enter a number");
    scanf("%d",&n);
    printf("the factorial of numbers upto %d is \n",n);
    for(int i=1;i<=n;i++){
        factorial=factorial*i;
        printf("%d\n",factorial);
    
    }
    
    return 0;

}