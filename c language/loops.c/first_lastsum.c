#include<stdio.h>
int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    int last=n%10,m;
    m=n;
    while(m!=0){
        m=m%10;
        m=m/10;
    }
    int first = m;
    printf("%d",first+last);
}