#include<stdio.h>
int main(){
    int A,P,l,b;//selling and cost price 
    printf("enter length and breadth: ");
    scanf("%d%d",&l,&b);
     A=l*b; P=2*(l+b);

    if (A>P)
    {
        printf("Area of rectangle is GREATER than its PERIMETER");
    } else{
        if (A==P)
        {
            printf("Area of rectangle is EQUAL to its perimeter");
        } else {
            printf("Area of rectangle is SMALLER than its perimeter");
        }
        
    }
    

    return 0;
}