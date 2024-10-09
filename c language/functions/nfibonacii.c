#include<stdio.h>
int fibonacii(int n){
    int a=1,b=1,sum;
    printf("%d\n%d\n",a,b);
    for(int i=1;i<=(n-2);i++){
        sum=a+b;
        a=b;
        b=sum;
        printf("%d\n",sum);
    }
   // printf("%d\n",sum);
    return n;
}
int main(){
    int n;
    printf("enter a number n::");
    scanf("%d",&n);
    printf("the fibonacii series is ::\n");
    fibonacii(n);
    return 0;
}