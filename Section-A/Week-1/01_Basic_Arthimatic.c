#include <stdio.h>

int main()
{
    int num1, num2;

    printf("enter the first number: ");
    scanf("%d", &num1);
    printf("enter the second number: ");
    scanf("%d", &num2);

    int sum = num1 + num2;
    int diffrence = num1 - num2;
    int product = num1 * num2;
    int division = num1 / num2;

    printf("\n Sum of two num is: %d\n subtraction of two num is: %d\n product of two num is: %d\n division of two num is: %d", sum, diffrence, product, division);
}