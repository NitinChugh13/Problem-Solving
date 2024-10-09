#include <stdio.h>
int factorial(int x)
{
    int fact = 1;
    for (int i = 1; i <= x; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int combination(int n,int r){
   int ncr=factorial(n) / (factorial(r) * factorial(n-r));
   return ncr;
}
int main()
{
    int n, r, ncr;
    printf("enter a number:");
    scanf("%d", &n);
    printf("enter a r:");
    scanf("%d", &r);
    ncr=combination(n,r);
    printf("the %dc%d is : %d", n, r, ncr);

    return 0;
}