#include<stdio.h>
int main (){
    float evs,pps,physics,maths,electrical;
    printf("enter the marks in 5 subjects :");
    scanf("%f%f%f%f%f",&evs,&pps,&physics,&maths,&electrical);
     printf("the toal of marks is %.2f\n the percentage is %.2f%% ",evs+pps+physics+maths+electrical,(evs+pps+physics+maths+electrical)*0.2);
     return 0;

} 