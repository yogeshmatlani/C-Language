// Write a program to find biggest among three numbers using pointer.

#include <stdio.h>

void largest(int *a, int *b, int *c)
{
     

        if (*a >= *b && *a >= *c)
        {
            printf("\nthe 1st is largest: %d", *a);
        }
        else if (*b >= *a && *b >= *c)
        {
            printf("\nthe 2nd is largest: %d", *b);
        }
        else
        {
            printf("\nthe 3rd is largest: %d", *c);
        }
    
}

int main()
{
    int x, y, z;
    int *ptr1 = &x, *ptr2 = &y, *ptr3 = &z;

    printf("Enter the first number: ");
    scanf("%d", &x);
    printf("Enter the second number: ");
    scanf("%d", &y);
    printf("Enter the third number: ");
    scanf("%d", &z);

    largest(ptr1, ptr2, ptr3);
}
