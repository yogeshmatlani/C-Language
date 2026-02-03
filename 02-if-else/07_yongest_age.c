// If the ages of Ali, Hamza and Basit are input through the keyboard, write a program to determine the youngest
// of the three

#include <stdio.h>

int main()
{
    int age_A, age_B, age_C;

    printf("enter the age A\t");
    scanf("%d", &age_A);
    printf("enter the age B\t");
    scanf("%d", &age_B);
    printf("enter the age C\t");
    scanf("%d", &age_C);

    if (age_A < age_B && age_A < age_C)
    {
        printf("\nThe age A %d is yongest", age_A);
    }
    else if (age_B < age_A && age_B < age_C)
    {
        printf("\nThe age B %d is yongest", age_B);
    }
    else
    {
        printf("\nThe age C %d is yongest", age_C);
    }
}