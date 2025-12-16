// Implement a recursive function Fibonacci that calculates the nth Fibonacci number. In the main
// function, take an integer input (n) and print the nth Fibonacci number using the Fibonacci function.

#include <stdio.h>

int series(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }

    return series(n - 1) + series(n - 2);
}

int main()
{
    int n;

    printf("enter the nth term of fibonacci:  ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", series(i));
    }
}