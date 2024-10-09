#include <stdio.h>
int main()
{
    int a, x, b;
    int n;
    printf("enter the values of a,x,b,");
    scanf("%d%d%d",&a,&x,&b);
    printf("enter n");
    scanf("%d",&n);
    switch (n)
    {
    case 1:
        printf("%d", (a * x) % b);
        break;
    case 2:
        printf("%d", (a * x * x) + (b * b));
        break;
    case 3:
        printf("%d", a - (b * x));
        break;
    case 4:
        printf("%d", a + (x /b));
        break;
    }
    return 0;
}