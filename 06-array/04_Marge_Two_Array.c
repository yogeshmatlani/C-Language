// Develop a program to merge two arrays into a single array.

#include <stdio.h>

int main()
{
    int a_size, b_size;

    printf("Enter the no of element of Array 1:  ");
    scanf("%d", &a_size);
    printf("Enter the no of element of Array 2:  ");
    scanf("%d", &b_size);

    printf("\n");

    int a[a_size];
    int b[a_size];
    int c[a_size + b_size];

    // take inputs from user for elements of array a
    for (int i = 0; i < a_size; i++)
    {
        printf("enter the element of array 1 on index[%d]: ", i);
        scanf("%d", &a[i]);
    }

    printf("\n");

    // take inputs from user for elements of array b
    for (int i = 0; i < b_size; i++)
    {
        printf("enter the element of array 2 on index[%d]: ", i);
        scanf("%d", &b[i]);
    }

    printf("\n");

    int n = 0;

    // this loop itterate for (a_size + b_size) times and marge the both array in c array. 
    for (int i = 0; i < a_size + b_size; i++)
    {
        if (i < a_size)
        {
            c[i] = a[i];
        }
        else
        {
            c[i] = b[n];
            n++;
        }

        printf("%d ", c[i]);
    }
}