#include <stdio.h>
int main()
{
    int d; // selling and cost price
    printf("enter a number : ");
    scanf("%d", &d);

    if (d >= 100 && d < 1000)
    {
        printf("%d is a three digit number", d);
    }
    else
    {
        printf("%d is not a three digit number ", d);
    }

    return 0;
}