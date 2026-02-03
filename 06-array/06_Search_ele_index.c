// Write a program to search for a specific element in an array and determine its index.

#include <stdio.h>

int main()
{
    int size, n = 0, counter = 0;

    printf("Enter the size of array: ");
    scanf("%d", &size);

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        printf("enter the element on index[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("\n");

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nSelect element to determine its index: ");
    scanf("%d", &n);

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == n)
        {
            counter++;
            printf("\nThe %d element is on index[%d]", arr[i], i);
        }
    }
}