// Write a C program that takes a numeric input for a month (1 to 12) and uses a switch-case statement to
// determine the season (e.g., spring, summer, fall, or winter) associated with that month.

#include <stdio.h>

int main()
{
    int month;

    printf("enter the month: ");
    scanf("%d", &month);

    if (month <= 3)
    {
        month = 1;
    }
    else if (month > 3 && month <= 6)
    {
        month = 2;
    }
    else if (month > 6 && month <= 9)
    {
        month = 3;
    }
    else if (month > 9 && month <= 12)
    {
        month = 4;
    }

    switch (month)
    {
    case 1:
        printf("summer");
        break;
    case 2:
        printf("spring");
        break;
    case 3:
        printf("autum");
        break;
    case 4:
        printf("winter");
        break;
    default:
        printf("invalid");
        break;
    }
}