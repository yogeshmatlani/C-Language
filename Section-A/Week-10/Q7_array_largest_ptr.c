// Q7: Find the largest number in an array using pointers.

#include <stdio.h>

int main()
{
    int size;

    // input the size of array from user and store in size
    printf("Enter the size of array: ");
    scanf("%d", &size);

    int arr[size];

    // this loop use for input the element of array and store on indexes of array
    for (int i = 0; i < size; i++)
    {
        printf("Enter the element on index[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    // a pointer variable which store the address of arr (store 0 index)
    int *p = arr;

    // store the 0 index value of array in largest variable.
    int largest = *p;

    for (int i = 0; i < size; i++)
    {
        printf("%d ", *p);
        // this condition check the array elements which stores in ptr. is greater than largest if true store in largest flase repeated
        if (*p >= largest)
        {
            largest = *p;
        }

        p++;
    }

    printf("\nThe largest element in array is: %d ", largest);
}