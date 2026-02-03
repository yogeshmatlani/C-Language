// Write a program in C to add two numbers using pointers

// code with using function

#include <stdio.h>

int sum(int *i, int *j)
{
    return *i + *j;
}

int main()
{
    int x, y;
    int *a = &x, *b = &y;

    printf("Enter the fisrt number: ");
    scanf("%d", &x);
    printf("Enter the second number: ");
    scanf("%d", &y);

    printf("The total sum is: %d", sum(a, b));
}


// ------------------------------- Simple Code ---------------------------------

/*
#include<stdio.h>

int main()
{
    int x,y;
    int *a = &x, *b = &y;

    printf("Enter the fisrt number: ");
    scanf("%d", &x);

    printf("Enter the second number: ");
    scanf("%d", &y);

    printf("The total sum is: %d", *a + *b);


}
*/