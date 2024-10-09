#include<stdio.h>
int main () {
    float R,V;
    printf("enter the value of R: ");
    scanf("%f",&R);
    V=4*3.14*R*R*R/3;
    printf("the volume of sphere is: %f",V);
    return 0;
}