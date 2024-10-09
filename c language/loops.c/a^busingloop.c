#include<stdio.h>
int main(){
    int a,b,power=1;
    printf("enter the base number: a");
    scanf("%d",&a);
    printf("enter the power to be found:b ");
    scanf("%d",&b);
    printf("the %d to power %d is\n",a,b);
    for(int i=1;i<=b;i++){
        power=power*a;
    }
    printf("%d\n",power);
    return 0;
}