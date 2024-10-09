#include<stdio.h>
int main() {
    int T1,F;
    printf("enter the value of T1 in degree celcius:");
    scanf("%d",&T1);
    F=9*T1/5+32;
    printf("the value of T1 in degree fahrenheit is :%d",F);
    return 0;
}