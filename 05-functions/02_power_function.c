// Create a C program that defines a function power which takes two parameters, base and exponent,
// and calculates the result of raising the base to the exponent. In the main function, take values for
// base and exponent, call the power function, and print the result.


#include<stdio.h>
#include<math.h>

int exponent(int a, int b)
{
    return pow(a,b);
}

int main()
{
    int base, power;

    printf("--------- Power Calculator ---------\n\n");

    printf("Enter the base: ");
    scanf("%d", &base);
    printf("Enter the power: ");
    scanf("%d", &power);
 
    printf("\nThe answer is: %d", exponent(base,power));
}