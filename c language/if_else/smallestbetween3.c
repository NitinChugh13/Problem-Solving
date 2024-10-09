#include<stdio.h>
int main(){
    int a,b,c,min;
    printf("enter three numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    min=(a<b)?((a<c)?(a):(c)):((b<c)?(b):(c));
    printf("minimum among three is %d",min);
    return 0;
}