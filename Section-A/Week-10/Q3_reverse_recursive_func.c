// Q3: Write a recursive function to reverse an integer number.

#include <stdio.h>

// A user defined recursive funtion that return reversed numbers.
int reverse(int n, int rev)
{
    // if user input n = 0 then return same 0;
    if (n == 0)
        return rev;

    //  It removes the last digit of the number and adds it to the reverse value, then recursively excutes the remaining number.
    return reverse(n / 10, rev * 10 + n % 10);
}

int main()
{
    int num;

    // input a number from user.
    printf("Enter number: ");
    scanf("%d", &num);

    // pass the that number to function and get answer in direct printf function. for print
    printf("Reversed number: %d", reverse(num, 0));

    return 0;
}
