//to print  sum of number and its reverse 
#include<stdio.h>
int main(){
    int r=0;
    int n;
    int lastdigit;
    int sum;
    printf("enter a number");
    scanf("%d",&n);
    printf("the reverse of number %d is \n",n);
    sum=n;
    while(n!=0) {
        lastdigit=n%10;
          r=r*10;
         r=r+lastdigit;
         n=n/10;
}
    printf(" %d\n ",r);
    sum=sum+r;
    printf("the sum of number and its reverse is %d\n",sum);
    return 0;

}
