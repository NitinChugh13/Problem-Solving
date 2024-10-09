#include<stdio.h>
int main() {
    char op;
    int a,b;
     printf("enter '+' or '-' " ,op);
     scanf("%c",&op);
    printf("enter the two numbers ",a,b);
    scanf("%d%d",&a,&b);
    op=='+'?printf(" the addition is : %d",a+b):printf("the subtraction is : %d",a-b);
    return 0;
}