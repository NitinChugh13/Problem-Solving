#include<stdio.h>
int main () {
    int n;
    printf("enter a numbr");
    scanf("%d",&n);

    int factorial=1;
    for(int i=1;i<=n;i++) {
        factorial=factorial * i;
    } 
     printf("final factorial is %d",factorial);
     return 0;
}