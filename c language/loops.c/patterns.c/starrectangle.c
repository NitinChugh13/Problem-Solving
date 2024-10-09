#include<stdio.h>
int main(){   //problem 
    int n,m;
    printf("enter number of rows ");
    scanf("%d",&n);
    printf("enter number of columns ");
    scanf("%d",&m);
    for(int i=1;i<=n;i++){//outer loop =number of rows 
        for(int i=1;i<=m;i++){ //inner loop=number of columns 
            printf("*");
        }
        printf("\n");
    } 
    
    return 0;  
}