// Write a C program that defines a function multiply which takes two integers as parameters and
// returns their product. In the main function, take two integers as input, call the multiply function,
// and print the result.

#include<stdio.h>

int product(int a, int b)
{
    return a*b;
}

int main()
{
    int x,y;

    printf("Enter the first digit: ");
    scanf("%d", &x);
    printf("Enter the second digit: ");
    scanf("%d", &y);

    int result = product(x,y);

    printf("The product of %d and %d is : %d", x, y, result);

}