// Design a program to print a half diamond pattern of asterisks. The user provides the number of
// rows for the pattern.

#include <stdio.h>

int main()
{
    int n;

    printf("enter the number of rows for half diamond: ");
    scanf("%d", &n);

    n = n / 2;

    for (int row = 1; row <= n; row++)
    {
        for (int ast = 1; ast <= row; ast++)
        {
            printf("*");
        }
        printf("\n");
    }

    n -= 1;

    for (int row = n; row >= 1; row--)
    {
        for (int ast = 1; ast <= row; ast++)
        {
            printf("*");
        }
        printf("\n");
    }
}