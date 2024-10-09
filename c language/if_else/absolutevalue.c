#include <stdio.h>
int main()
{
    int n;
    printf("enter a number : ");
    scanf("%d", &n);
    if (n < 0)
    {
        n = n * (-1);
        printf("the absolute value of -%d is %d ", n, n);
    }
    else
    {
        printf("%d is the absolute value of %d", n, n);
    }

    return 0;
}