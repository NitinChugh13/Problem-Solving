#include <stdio.h>
int main()
{
    int a, b, c;
    printf("enter the sides of triangle a , b ,c:");
    scanf("%d%d%d", &a, &b, &c);
        if (a + b > c && b + c > a && a + c > b) {
        printf("Valid sides of a triangle.\n");

        if (a == b && b == c)
            printf("Equilateral triangle\n");
        else if (a == b || b == c || a == c)
            printf("Isosceles triangle\n");
        else if ((a * a) + (b * b) == (c * c) || (a * a) + (c * c) == (b * b) || (b * b) + (c * c) == (a * a))
            printf("Right angled triangle\n");
        else
            printf("Scalene triangle\n");
    } else {
        printf("Not a valid triangle.\n");
    }
   return 0;
}