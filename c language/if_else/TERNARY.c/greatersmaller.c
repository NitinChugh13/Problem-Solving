#include<stdio.h>
int main() {
    int a,b,c,max;
    printf("enter the three numbers :");
    scanf("%d%d%d",&a,&b,&c);
    max=(a>b)?(a>c?a:c):(b>c?b:c);
    printf("the greatest number is %d",max);
    return 0;
}