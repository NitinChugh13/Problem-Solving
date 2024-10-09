#include<stdio.h>
int pfactor(int n){
     int i,flag=0,j;
    for(i=2;i<=n;i++){
        if(n%i==0){
        for(j=2;j<=i/2;j++){
            if(i%j==0){
                flag=1;
                break;
            }
        }
        if(flag==0){
            printf("%d ",i);
        }
        }
    }
    return n;
}
int main(){
    int n;
    printf("enter a number:: ");
    scanf("%d",&n);
    printf("the prime factors of %d are ::\n",n);
    pfactor(n);
    return 0;
}