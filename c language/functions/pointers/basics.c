#include <stdio.h>
int main()
{
    int a = 10;
    char i = 'A';
    char *m = &i; // character pointer
    float p = 7.5;
    float *n = &p; // float pointer
    printf("the float value  is: %.2f\n", p);
    printf("the address of float value is  is :%d\n", n);

    printf("the character is: %c\n", i);
    printf("the address of character is :%d\n", m);
    printf("the value of a is : %d\n", a);
    printf("the address of a is : %p\n", &a);
    printf("the address of a is : %u\n", &a); // to print address in integer
    // int*j=a;generating warning because *j is supposed to store the address of a not a
    int *j = &a; // correct interger pointer
    int x = 60;  // value
    int *b = &x; // pointer a points the address of a
    int *h = b;  // pointer j is also points the address of a
    // pint is i can store a pointer in a pointer directly
    // but i need to use & to store inter or float in a pointer
    printf("the value of j is :%d\n", j);  // address of a
    printf("the value of b is : %d\n", b); // address  of x
    printf("the value of h is: %d\n", h);  // address of b
    printf("the address of pointer of h is: %d\n", &h);
    printf("the value at pointer j is: %d\n", *j);
    printf("the value at pointer b is: %d\n", *b);
    printf("the value at pointer h is: %d\n", *h);

    return 0;
}