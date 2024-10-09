#include <stdio.h>
int main()
{
    char ch;
    float a,b;
    printf("enter the operation");
    scanf("%c", &ch);
    printf("enter the two values ",a,b);
    scanf("%f%f",&a,&b);
    switch (ch)
    {
    case '+':
        printf("%f", a + b);
        break;
    case '-':
        printf("%f", a - b);
        break;
    case '*':
        printf("%f", a * b);
        break;
    case '/':
        printf("%f", (float)a /b);
        break;
    default:
        printf("wrong case");
    }
    return 0;
}