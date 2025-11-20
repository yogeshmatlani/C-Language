// Write a C program that takes a numeric input for a day (1 to 7) and uses a switch-case statement to print the
// corresponding day of the week. Ensure that the program handles invalid inputs.

#include <stdio.h>

int main()
{
    int day;

    printf("enter the day num: ");
    scanf("%d", &day);

    switch (day)
    {
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thursday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
    case 7:
        printf("Sunday");
        break;
    default:
        printf("invalid");
    }
}