#include <stdio.h>
int main()
{
    int d; // selling and cost price
    printf("enter a number: ");
    scanf("%d", &d);

    if (d % 5 == 0 && d % 3 == 0)
    {
        printf(" %d is DIVISIBLE BY 5 AND 3", d);
    }
    else
    {
        printf(" %d is NOT  DIVISIBLE BY 5 AND 3", d);
    }

    return 0;
}