#include<stdio.h>
int main (){
    float a,b;
    printf("enter the values of a and b :");
    scanf("%f%f",&a,&b);//using third variable
   // t=a;a=b;b=t;
   a=a+b ; b=a-b ; a=a-b;
     printf("the swapped numbers are %f,%f : ",a,b);
     return 0;

} 