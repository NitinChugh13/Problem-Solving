#include<stdio.h>
int main(){
    int a,b,c,d,e;
    printf("enter a 5 digit number");
    scanf("%d",&a);
    b=a%10;
    a=a/10;
    c=a%10;
    a=a/10;
    d=a%10;
    a=a/10;
    e=a%10;
    a=a/10;
    printf("the reverse of number is %d%d%d%d%d\n",b,c,d,e,a);
    printf("sum is %d",b+c+d+e+a);
    return 0;
    

}