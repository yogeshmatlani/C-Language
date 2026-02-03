// Write a C program that uses nested loops to print a right-angled triangle pattern of asterisks. The
// user should specify the number of rows for the triangle.

#include<stdio.h>

int main()
{
    int n;

    printf("enter the number of rows for right tringle pattern: ");
    scanf("%d", &n);

    for (int vertical = 1; vertical <= n; vertical++)
    {
        for (int ast = 1; ast <= vertical; ast++)
        {
            printf("*");
        }
        printf("\n");
    }
    
}