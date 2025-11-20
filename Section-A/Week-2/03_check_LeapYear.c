// Write a program to check the year entered is a leap year or not.

#include<stdio.h>

int main()
{
    int year;

    printf("enter the year to check leapyear or not: ");
    scanf("%d", &year);

    if (year%4 == 0)
    {
        printf("you entered year: %d is leap year", year);
    }
    else{
        printf("you entered year: %d is not leap year", year);
    }
    
}