#include <stdio.h>
int main()
{
    int a, b, c;
    printf("enter a,b and c : "); //prettier alt shift f
    scanf("%d%d%d", &a, &b, &c);
    if (a == b && b == c)
    {
        printf("all the three numbers are EQUAL");
    }
    else
    {
        if (a > b)
        {
            if (a > c)
            {
                printf(" %d is GREATEST among the three numbers ", a);
            }
            else
            {
                printf("%d is GREATEST among the three numbers ", c);
            }
        }
        else
        {
            if (b > c)
            {
                printf("%d is greatest among the three numbers ", b);
            }
            else
            {
                printf("%d is GREATEST among the three numbers ", c);
            }
        }
    }

    return 0;
}