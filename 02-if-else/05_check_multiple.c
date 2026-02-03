// Write a program that a number input from user . Check whether the number is multiple of 3 or 7 or both. (
// using || operator )

#include <stdio.h>

int main()
{
    int num;

    printf("enter the number to check multiple of 3 or 7: ");
    scanf("%d", &num);

    if (num % 3 == 0 && num % 7 == 0)
    {
        printf("The number %d multiple of both 3 and 7", num);
    }
    else if (num % 3 == 0)
    {
        printf("The number %d is divisible of 3", num);
    }
    else if (num % 7 == 0)
    {
        printf("The number %d is divisible of 7", num);
    }
    else
    {
        printf("The number is not divisible of both 3 and 7");
    }
}