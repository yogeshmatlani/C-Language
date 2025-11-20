// A number is taken input from the user; Write a program to determine if it is an odd number or an even
// number.

#include<stdio.h>

int main()
{
    int num;

    printf("enter the number to check even or odd: ");
    scanf("%d", &num);

    if (num%2 == 0)
    {
        printf("you entered number %d is even", num);
    }
    else{
        printf("you entered number %d is odd", num);
    }
    
}