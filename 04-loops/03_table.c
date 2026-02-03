// Write a C program to generate the multiplication table for a number entered by the user using a for
// loop. For example, if the user enters 5, the program should print the multiplication table for 5 up to
// a specified range.

#include<stdio.h>

int main()
{
    int table;

    printf("enter the number to print table: ");
    scanf("%d", &table);

    for (int n = 1; n <= 12; n++)
    {
        printf("%d X %2d = %3d\n", table, n, table*n);
    }
    
}