#include<stdio.h>
int power(int a,int b){
    if(b==0)return 1;
    else {
        return a*power(a,b-1);
    }
}
    int main(){
        int a,b;
        printf("enter the base number and power:");
        scanf("%d%d",&a,&b);
        printf("%d^%d=%d",a,b,power(a,b));
        return 0;
    }
