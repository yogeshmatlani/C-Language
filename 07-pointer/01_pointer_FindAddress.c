// Write a program to find the address of two integer variables

#include<stdio.h>

int main()
{
    int x, y;
    int *p1 = &x, *p2 = &y;

    printf("Enter the first digit: ");
    scanf("%d", &x);
    printf("Enter the second digit: ");
    scanf("%d", &y);

    printf("\nthe first number is %d and its address: %p", *p1, p1);
    printf("\nthe second number is: %d and its address is: %p", *p2, p2);
}