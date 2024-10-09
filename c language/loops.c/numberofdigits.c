//to count number of digits in a number 
#include<stdio.h>
int main(){
    int count=0;
    int n;
    printf("enter a number");
    scanf("%d",&n);
    printf("the number of digits in %d is \n",n);
    while(n!=0) {
        n=n/10;
        count++;
} 
    printf(" %d\n ",count);
    return 0;

}
