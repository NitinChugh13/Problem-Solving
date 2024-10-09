#include<stdio.h>
int main (){
    float amount,DA,HRA,PF,GS,NS;
    printf("enter the amount :");
    scanf("%f",&amount);
    DA=amount*0.25;
    HRA=amount*0.15;
     GS=amount+DA+HRA;
     PF=GS*0.1;
     NS=GS-PF;
     printf("the net salary is %f",NS);
     return 0;

} 