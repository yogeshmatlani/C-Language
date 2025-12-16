//Create a program to find the largest element in an array of numbers.

#include<stdio.h>

int main()
{
    int size;

    printf("Enter the Size of array: ");
    scanf("%d", &size);

    int arr[size];

    // this loop itterate for size times and input element from user then store on index
    for (int i = 0; i < size; i++)
    {
        printf("Enter the Element on index[%d]:  ", i);
        scanf("%d", &arr[i]);
    }

    int large = arr[0];  

    // this loop itterate for size times and check the largest element
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);

        if (large <= arr[i])
        {
            large = arr[i];
        }
    }

    printf("\nThe Largest Element is: %d", large);
    

    

    
}