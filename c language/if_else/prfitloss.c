#include <stdio.h>
int main()
{
    int sp, cp, d; // selling and cost price
    printf("enter sp: ");
    scanf("%d", &sp);
    printf("enter cp: ");
    scanf("%d", &cp);
    d = sp - cp;

    if (sp > cp)
    {
        printf("PROFIT of %d", d);
    }
    else
    {
        if (sp == cp)
        {
            printf("NO PROFIT NO LOSS");
        }
        else
        {
            d = d * (-1);
            printf("LOSS of %d ", d);
        }
    }

    return 0;
}