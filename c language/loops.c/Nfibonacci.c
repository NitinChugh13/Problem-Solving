//1,1,2,3,5,8,13,........to print n fibonacci numbers
#include<stdio.h>
int main(){
    int n;
    printf("enter a number");
    scanf("%d",&n);
    printf("the %d th number of fabonacci series is \n",n);
    int a=1;
    printf("%d\n",a);
    int b=1;
    printf("%d\n",b);
    int sum;
    for(int i=1;i<=n-2;i++) { 
        sum=a+b;
        a=b;
        b=sum;
        printf("%d\n",sum);//problem.........
    }
    
    return 0;

}