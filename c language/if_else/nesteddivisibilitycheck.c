#include <stdio.h>
int main()
{
    int d;
    printf("enter a number: ");
    scanf("%d", &d);

    if (d % 5 == 0 || d % 3 == 0)//d%5==0||d%3==0&&d%15!=0 this will not run as priority of logical and is more than or
    {
        if (d % 15 != 0)
        {
            printf("number is divisible by 5 or 3 but not by 15");// (d%5==0||d%3==0) &&d%15!=0 now it will work
        }
        else
        {
            printf("number is divisible by 5 or 3 and 15 ");
        }
    }
    else
    {
        printf("number is  not divisible by 5 or 3 ");
    }

    return 0;
}