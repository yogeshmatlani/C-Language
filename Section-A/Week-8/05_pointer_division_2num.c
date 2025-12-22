// Write a program to perform division between two variables using pointer

#include<stdio.h>

float division(float *x, float *y)
{
    return *x / *y;
}

int main()
{
    float a , b;
    float *p1 = &a, *p2 = &b;

    printf("Enter the first number: ");
    scanf("%f", &a);
    printf("Enter the second number: ");
    scanf("%f", &b);

    printf("\nThe division of %.2f and %.2f is: %.2f", *p1, *p2, division(p1,p2));
}