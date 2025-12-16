// Write a C program with a function findMax that finds and returns the maximum value in an array
// of integers. In the main function, take an array of integers as input, call the findMax function, and
// print the maximum value.

#include <stdio.h>

int findmax(int a[])
{
    int large = a[0];

    for (int i = 0; i < 5; i++)
    {
        if (large <= a[i])
        {
            large = a[i];
        }
    }
    return large;
}

int main()
{
    int size;

    printf("Enter the Size of array: ");
    scanf("%d", &size);

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        printf("Enter the element on index [%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("\nThe largest element is: %d", findmax(arr));
}