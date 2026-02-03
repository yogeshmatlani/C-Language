// If a four-digit number is input through the keyboard, write a program to obtain the sum of the first
// and last digit of this number.

#include<stdio.h>

int main()
{
    int num;

    printf("enter the four digit number: ");
    scanf("%4d", &num);

    int first = num/1000;
    int last = num%10;
    int sum = first + last;

    printf(" The first digit is: %d\n The last digit is: %d\n The sum of first and last digits is: %d", first, last, sum);
}