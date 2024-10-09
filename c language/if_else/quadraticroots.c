#include <stdio.h>
#include <math.h>
int main()
{
    float D, a, b, c;
    printf("enter the values of a,b and c for an equation ");
    scanf("%f%f%f", &a, &b, &c);
    D = (b * b) - (4 * a * c);
    if (D > 0)
    {
        printf("real and unequal roots\nand are %f,%f ", (-b + sqrt(D)) / (2 * a), (-b - sqrt(D)) / (2 * a));
    }
    else if (D == 0)
    {
        printf("the roots are real and are %f", -b / (2 * a));
    }
    else if (D < 0)
    {
        printf("thr roots are imaginary");
    }

    return 0;
}