#include <stdio.h>
int main()
{
    int x, y;
    printf("enter point (x1,y1): ");
    scanf("%d%d", &x, &y);
    if (x == 0 && y == 0)
    {
        printf("point lies at ORIGIN");
    }
    else
    {
        if (x == 0) 
            printf("point lies in Y axis ");
        else
        {
            if (y == 0) 
                printf("point lies on X axis ");
            else
                printf("point lies in XY plane ");
        }
    }
    return 0;
}