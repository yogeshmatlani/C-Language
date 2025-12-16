//Write a program that calculates the sum of elements in an array of integers.

#include<stdio.h>

int main()
{
    int size, sum = 0;

    printf("Enter the size of array: ");
    scanf("%d", &size);

    int arr[size];

    // This loop itterate for user input times. and assign the element on index of array. and calculate the sum
    for (int i = 0; i < size; i++)
    {
        printf("enter the element on index[%d]:  ", i);
        scanf("%d", &arr[i]);

        sum = sum+arr[i];
    }

    puts(""); // just for new line

    // this loop print the elements of array
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    
    printf("\nThe sum of elements is: %d", sum);
    
}