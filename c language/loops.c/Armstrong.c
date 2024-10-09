#include<stdio.h>
#include<math.h>
int main () {  //problem//itrator 0r counter//
   int n,count=0,r,m,sum=0,p;
   printf("enter a number: ");
   scanf("%d",&n);
    m=n;
    p=n;
   while(n!=0){
      n=n/10;
      count++;
   }
    while(m!=0){
        r=m%10;
        sum+=pow(r,count);
        m=m/10;
    }

    if(sum==p){
        printf("ARMSTRONG NUMBER");
    }
    else {
        printf("NON ARMSTRONG NUMBER");
    }  
     return 0;
}