#include<stdio.h>
int main() {
    int n,a=4;
    printf("enter a number ");
    scanf("%d",&n);
    //1,3,5,7,.......=d=2
    for(int i=1;i<=n;i++) { //4,7,10,.....d=3
    printf("%d\n",a);//printf is always come first as we need to print a also and then inc it by 1
        a=a+3;
    
    
    }
    return 0;
}
