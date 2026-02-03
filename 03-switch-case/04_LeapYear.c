// Create a program that checks if a year is a leap year. The program should take a year as input and use a
// switch-case statement to determine whether it's a leap year or not.

#include <stdio.h>

int main()
{
    int year, leapyear;

    printf("enter the year to check to leap year: ");
    scanf("%d", &year);

    if (year % 4 == 0)
    {
        leapyear = 1;
    }
    else if (year % 4 != 0)
    {
        leapyear = 2;
    }

    switch (leapyear)
    {
    case 1:
        printf("you entered: %d. this is leapyear", year);
        break;
    case 2:
        printf("you entered: %d. this is not leapyear", year);
        break;
    default:
        printf("invalid");
        break;
    }
}