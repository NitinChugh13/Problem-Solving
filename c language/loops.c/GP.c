#include<stdio.h>
int main() {
    int n,a=1;
    printf("enter a number ");
    scanf("%d",&n);
    //1,3,5,7,.......=d=2
    for(int i=1;i<=n;i++) { //1,2,4,.....r=3
    printf("%d\n",a);
        a=a*2;
    
    
    }
    return 0;
}
