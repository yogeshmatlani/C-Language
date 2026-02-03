// Write a program that takes a number as input and uses a do-while loop to reverse and print the
// digits of that number. For example, if the input is 12345, the program should print 54321.

#include <stdio.h>

int main()
{
    int num, rev, rem;

    printf("enter the numbers to revers: ");
    scanf("%d", &num);

    do
    {
        rem = num % 10;
        rev = rem;
        num = num / 10;

        printf("%d  ", rem);
    } while (num != 0);
}