//to print reverse of a number 
#include<stdio.h>
int main(){
    int r=0;
    int lastdigit;
    int n;
    printf("enter a number");
    scanf("%d",&n);
    printf("the reverse of number %d is \n",n);
    while(n!=0) {
        lastdigit=n%10;
          r=r*10;
         r=r+lastdigit;
         n=n/10;
        
} 
    printf(" %d\n ",r);
    return 0;

}
