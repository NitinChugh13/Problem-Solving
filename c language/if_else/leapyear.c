/*#include<stdio.h>//ladder
int main(){
    int year;
    printf("enter a year: ");
    scanf("%d",&year);
    if (year%100==0&&year%400==0)
    {
        printf("%d is a leap year",year);
    }
    else if (year%100==0){
        printf("%d is a century year",year);
    }
    else if (year%4==0){
    printf("%d is a leap year",year);
    }
    else {
        printf("%d is not a leap year",year);
    }
    return 0;
}*/

#include <stdio.h> //if else
int main()
{
    int year;
    printf("enter a year: ");
    scanf("%d", &year);
    if (year % 100 == 0 && year % 400 == 0)
    {
        printf("%d is a leap year", year);
    }
    else
    {
        if (year % 100 == 0)
        {
            printf("%d is a century year", year);
        }
        else
        {
            if (year % 4 == 0)
            {
                printf("%d is a leap year", year);
            }
            else
            {
                printf("%d is not a leap year", year);
            }
        }
    }

    return 0;
}
