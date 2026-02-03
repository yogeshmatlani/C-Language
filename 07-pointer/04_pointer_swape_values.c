// Write a program to swap value of two variables using pointer

#include<stdio.h>

void swap(int *a, int *b)
{

    int temp = *a;
    *a = *b;
    *b = temp;

    // you can use this way. both correct
    // *a = *a + *b;
    // *b = *a - *b;
    // *a = *a - *b;

    printf("\n-------- Value Swaped --------\n");
    printf("\nX is: %d and Y is: %d", *a, *b);
}

int main()
{
    int  x , y;
    int *pt1 = &x , *pt2 = &y;

    printf("enter the X value: ");
    scanf("%d", &x);
    printf("enter the Y value: ");
    scanf("%d", &y);

    swap(pt1, pt2);
}