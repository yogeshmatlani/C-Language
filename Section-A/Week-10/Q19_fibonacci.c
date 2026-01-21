// Write a recursive function to print Fibonacci series up to N terms.

#include <stdio.h>

int fibo(int n)
{
    // these condition use for fibonacci n == 0 and n == 1 these are base of fibonacci
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return fibo(n - 1) + fibo(n - 2);
    }
}

int main()
{
    int x;

    // input the range of series
    printf("Enter the range of fibonacci series: ");
    scanf("%d", &x);

    // call funtion in loop for x times. pass the value and func reture the ans
    for (int i = 0; i <= x; i++)
    {
        printf("%d ", fibo(i));
    }
}