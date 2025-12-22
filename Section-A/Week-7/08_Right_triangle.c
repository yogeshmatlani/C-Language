#include <stdio.h>

int main()
{
    int size;

    printf("Enter odd number to generate sqare: ");
    scanf("%d", &size);

    int arr[size][size];

    // this loop itterate for size times and store n+1 value in row into colom (row,colom)
    for (int i = 0; i <= size; i++)
    {
        for (int n = 0; n <= size; n++)
        {
            arr[i][n] = n + 1;
        }
    }

    // this loop itterate for size times and print element as row into colom (r,c)
    for (int i = 0; i <= size; i++)
    {
        // this loop depends on i and print i times horizontally
        for (int n = 0; n < i; n++)
        {
            printf("%-2d ", arr[i][n]);
        }
        printf("\n");
    }
}
