//  Write a C program that uses a do-while loop to prompt the user to enter a even number. Keep
// prompting until a valid even number is entered.

#include<stdio.h>

int main()
{
    int num;

    do
    {
        printf("enter the even number to stop loop: ");
        scanf("%d", &num);

    } while (num%2 != 0);
    
}