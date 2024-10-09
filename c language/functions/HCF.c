#include <stdio.h>
int minimum(int a, int b)
{
    int min;
    if (a < b)
    {
        min = a;
    }
    else
        min = b;
    return min;
}
int hcf(int a, int b)
{
    int gcd;
    for (int i = minimum(a, b); i >= 1; i--)
    {
        if (a % i == 0 && b % i == 0)
        {
            gcd = i;
            break;
        }
    }
    return gcd;
}
int main()
{
    int a, b;
    printf("enter first number:");
    scanf("%d", &a);
    printf("enter second number:");
    scanf("%d", &b);
    printf("the hcf/gcd of %d and %d is:  %d",a,b,hcf(a,b));

    return 0;
}