// Write a program that shows whether the driver is insured or not. The conditions that are true are as follows:
// The driver is married.
// The driver is unmarried, male and is above the age of 30.
// The driver is unmarried, female and is above the age of 25.

#include <stdio.h>

int main()
{
    char married, gender;
    int age;

    printf("enter the Gender male or female (M or F / m or f): ");
    scanf("\n%c", &gender);
    printf("enter the age: ");
    scanf("%d", &age);
    printf("enter married status yes or not (Y or N / y or n): ");
    scanf("\n%c", &married);

    if (married == 'Y' || married == 'y')
    {
        printf("you are married eligible for insurance");
    }
    else if ((married == 'n' || married == 'N') && (gender == 'M' || gender == 'm') && (age >= 30))
    {
        printf("you are unmarried, male, age > 30 eligible for insurance");
    }
    else if ((married == 'n' || married == 'N') && (gender == 'F' || gender == 'f') && (age >= 25))
    {
        printf("you are unmarried, female, age > 25 aligible for insurance");
    }
    else
    {
        printf("you are not eligible for insurance");
    }
}