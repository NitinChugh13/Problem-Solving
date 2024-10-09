#include<stdio.h>
int main() {
    int year;
    printf("enter year");
    scanf("%d",&year);
    (year%100==0)?( (year%400==0)?(printf("%d is a leap year",year)):(printf("%d is not a leap year",year))):( (year%4==0)?(printf("%d is a leap year",year)):(printf("%d is not a leap year",year)));
    return 0;
}