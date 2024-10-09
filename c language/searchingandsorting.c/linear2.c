#include <stdio.h>
int main()
{
    int i, n, x, count=0;
    printf("enter the size of array: ");
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
    {
        printf("enter the %d element of array: ", i + 1);
        scanf("%d", &a[i]);
    }
    printf("enter the element needs to be found: ");
    scanf("%d", &x);
    for (i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            printf("position=%d\n",i+1);
            count++;
            
        }
        
    }
    if (count >0)
        printf("total=%d\n",count);
    else
        printf("element not found");

    return 0;
}