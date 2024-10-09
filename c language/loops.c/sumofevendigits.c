//to print sum of even digits in a number 
#include<stdio.h>
int main(){
    int sum=0;
    int lastdigit;
    int n;
    printf("enter a number");
    scanf("%d",&n);
    printf("the sum of even digits in %d is \n",n);
    while(n!=0) {
        lastdigit=n%10;
        if(lastdigit%2==0){
        sum=sum+lastdigit;
        }
        n=n/10;
        
} 
    printf(" %d\n ",sum);
    return 0;

}
