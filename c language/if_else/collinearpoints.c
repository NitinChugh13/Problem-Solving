#include <stdio.h>
int main()
{
    int x1, x2, y1, y2, x3, y3, m1, m2;
    printf("enter first point (x1,y1): ");
    scanf("%d%d", &x1, &y1);
    printf("enter second point (x2,y2): ");
    scanf("%d%d", &x2, &y2);
    printf("enter third point (x3,y3): ");
    scanf("%d%d", &x3, &y3);
    m1 = (y2 - y1) / (x2 - x1);
    m2 = (y3 - y2) / (x3 - x2);
    if (m1 == m2)
        printf("points are collinear");
    else
        printf("points are non collinear");
    return 0;
}