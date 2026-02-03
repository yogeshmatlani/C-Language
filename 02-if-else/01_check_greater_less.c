// Write a C program to check the first number is greater than the second number.

#include<stdio.h>

int main()
{
    int n1, n2;

    printf("enter the first number: ");
    scanf("%d", &n1);
    printf("enter the second number: ");
    scanf("%d", &n2);

    if (n1 > n2)
    {
        printf("The first number is: %d greater than second", n1);
    }
    else if (n1 < n2)
    {
        printf("The second number is: %d greater than first", n2);
    }
    else{
        printf("The first number: %d and second number: %d are equal", n1, n2);
    }
    
    
}