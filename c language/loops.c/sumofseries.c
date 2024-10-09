//to solve 1-2+3-4+5-6+7-.........upto n
#include<stdio.h>
int main(){
    int n;
    int sum=0;
    printf("enter a number");
    scanf("%d",&n);
    printf("the sum of series upto %d is \n",n);

    for(int i=1;i<=n;i++) {
        if(i%2==0){
            sum=sum-i;  //we can also use if n is even then sum=-n/2
        }                //n/2+1 then we require only if and else  
        else {
    sum=sum+i; 
        }
        
        
    }
    printf("%d\n",sum);
    return 0;
}