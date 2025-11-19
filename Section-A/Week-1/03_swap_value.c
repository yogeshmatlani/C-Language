//Write a program to swap numbers. (Without using the temp variables. Use Arithmetic Operators)

#include <stdio.h>

int main()
{
    int a = 4, b = 5;

    a = a+b;
    b = a-b;
    a = a-b;

    printf("The value of a is: %d and b is: %d",a,b);
}