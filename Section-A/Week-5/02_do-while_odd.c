// Create a program that uses a do-while loop to print odd numbers from 1 to 19.

#include <stdio.h>

int main()
{
    int num = 1;

    do
    {
        printf("%d\n", num);

        num += 2;
    } while (num != 21);
}