#include <stdio.h>
int main()
{
    int a, b, c;
    printf("enter the sides of a triangle ::");
    scanf("%d%d%d", &a, &b, &c);
    if (a + b > c && b + c > a && a + c > b)
    {
        printf("they CAN be sides of a triangle ");
    }
    else
    {
        printf("they CANNOT be sides of a triangle ");
        ;
    }

    return 0;
}