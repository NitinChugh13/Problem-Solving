#include<stdio.h>//to print A B C D
int main(){
    int n,a;
    printf("enter the number ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int a=1;
        for(int j=1;j<=n;j++){
            char ch=(char)a+64;
            printf("%c ",ch);
            a=a+1;
        }
        printf("\n");
    }   
    return 0; 
}