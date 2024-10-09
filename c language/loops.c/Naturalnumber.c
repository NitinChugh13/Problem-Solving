#include<stdio.h>
int main () {
    int number;
    printf("enter a number :");
    scanf("%d",&number);
    if(number>=1) {
        printf("the number is natural");
    } else {
        printf("the number is not natural");
    }
    return 0;
}