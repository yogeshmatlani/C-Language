// Write a program and show the memory address of 10 indexes, array data type was integer and
// shows the addresses of particular array on screen?

#include <stdio.h>

int main()
{
    int arr[10] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 34};
    int *ptr = arr;

    for (int i = 0; i < 10; i++)
    {
        printf("The index[%d] --> Number is: %2d and its Address: %p\n", i, *ptr, ptr);

        ptr++;
    }
}