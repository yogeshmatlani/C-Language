// Q9: Write a function that returns 1 if a number is prime, otherwise 0.

#include <stdio.h>

int prime(int n)
{
    int num = 0;
    int i;
    // this loop excute less than n times. check all number before n and not 1 (2 to n-1). if that number divisible by n and before n : return 0
    // means not a prime. or after end the loop return 1 means: is prime because it divisible by itself.

    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int x;

    printf("Enter the number to check prime number: ");
    scanf("%d", &x);

    printf("\n------- 1 is true and 0 is false -------\n");
    // send the copy to the functon and get result. and function called in print function
    printf("%d", prime(x));
}