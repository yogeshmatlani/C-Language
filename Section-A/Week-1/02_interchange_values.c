//Write a program to interchange values of two operands a and b.

#include <stdio.h>

int main()
{
    int a = 25, b = 50, temp;

    temp = a;
    a = b;
    b = temp;

    printf("The value of a is: %d and b is: %d",a,b);
}