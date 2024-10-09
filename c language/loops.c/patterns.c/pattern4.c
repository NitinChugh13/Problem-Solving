#include<stdio.h>
int main(){
    int n,p;
    printf("enter the number of rows:");
    scanf("%d",&n);
    p=n-1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=p;j++){
            printf("* ");
        }
        printf("\n");
         p--;
    }

    return 0;
}