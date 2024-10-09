#include <stdio.h>
int main()
{
    int a, b, c, d;
    printf("enter 4 numbers : ");
    scanf("%d%d%d%d", &a, &b, &c, &d);
    // prettier alt shift f
    if (a == b && b == c && c == d)
    {
        printf("all the 4 numbers are EQUAL");
    }
    else if (a > b && a > c && a > d)
    {
        printf("%d is GREATEST", a);
    }
    else if (b > c && b > d)
    {
        printf("%d is GREATEST", b);
    }
    else if (c > d)
    {
        printf("%d is GREATEST", c);
    }
    else
    {
        printf("%d is GREATEST", d);
    }
    return 0;
}