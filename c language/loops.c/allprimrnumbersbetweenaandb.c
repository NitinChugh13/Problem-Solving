#include<stdio.h>
int main () {
    int a ,b , factor=0;
    printf("enter the lower number of  range:a ");
    scanf("%d",&a);
    printf("enter the upper number of range:b ");
    scanf("%d",&b);
     for(int i=a ;i<=b ; i++) {
       for(int j=1 ;j<=i ; j++) {
            if(i%j==0) {
                factor++;
            }
       }

         if(factor==2){
        printf("%d\n",i);

     } 
     factor=0;
     } 
     return 0;
     }

