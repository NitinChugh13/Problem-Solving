#include<stdio.h>
int main() {
    int l,b,perimeter;
    printf("enter the length of rectangle ");
    scanf("%d",&l);
    printf("enter the breadth of rectangle ");
    scanf("%d",&b);

    perimeter=2*l+2*b;
    printf("the perimeter of rectangle is%d",perimeter);
    return 0;
}
