// Create a program that inserts an element at a specified position in an array.

#include <stdio.h>

int main()
{
    int size, n, position;

    printf("Enter the no of element: ");
    scanf("%d", &size);

    int arr[size];

    // this loop itterate for size times and take input from user
    for (int i = 0; i < size; i++)
    {
        printf("Enter the Element on index [%d]: ", i);
        scanf("%d", &arr[i]);
    }

    // this loop print the all element
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    // Now take new element and its position from user
    printf("\n\nEnter the Element to insert: ");
    scanf("%d", &n);
    printf("Enter the position (1 to %d): ", size);
    scanf("%d", &position);

    arr[position - 1] = n;

    // this loop itterate for size times and print the array after inserted
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}