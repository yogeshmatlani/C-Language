// Develop a program that reverses the elements of an array.

#include <stdio.h>

int main()
{
    int size;

    printf("Enter the size of array: ");
    scanf("%d", &size);

    int arr[size];

    // take elements as input from user and store in array  
    for (int i = 0; i < size; i++)
    {
        printf("Enter the element on index[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    // this loop reverse the element
    for (int i = 0, j = size - 1; i < size / 2; i++, j--)
    {
        arr[i] = arr[i] + arr[j];
        arr[j] = arr[i] - arr[j];
        arr[i] = arr[i] - arr[j];
    }

    printf("\n----------- In Reverse Order -----------\n\n");

    // this loop print the reversed all element
    for (int i = 0; i < size; i++)
    {
        printf("%d  ", arr[i]);
    }
}