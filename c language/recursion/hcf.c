#include <stdio.h>
int GCD(int a, int b)
{
    if (a == b)
        return a;
    else if (a > b)
        return GCD(a - b, b);
    else
        return GCD(a, b - a);
}
int main()
{
    int a, b;
    printf("enter the two numbers:");
    scanf("%d%d", &a, &b);
    printf("HCF=%d", GCD(a, b));

    return 0;
}