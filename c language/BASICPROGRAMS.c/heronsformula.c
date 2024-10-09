#include<stdio.h>
#include<math.h>
int main (){
    float a,b,c,p,s;
    printf("enter the values of length of traingle  :");
    scanf("%f%f%f",&a,&b,&c);
    s=(a+b+c)/2;
      p=pow(s*(s-a)*(s-b)*(s-c),0.5);   
     printf("the area of triangle is %f : ",p);
     return 0;

} 