// Design a program that calculates the factorial of a number entered by the user using a for loop. The
// factorial of a number is the product of all positive integers from 1 to that number.

#include<stdio.h>

int main()
{
    int num, factorial;

    printf("enter the number to calculate factorial: ");
    scanf("%d", &num);

    int input = num;

    for (int i = num-1; i >= 1; i--)
    {
        factorial = i*num;
        //printf("%d ",  factorial);

        num = factorial;
    }
    
    printf("\nThe factorial of %d is %d", input, factorial);


    //       same factorial calculation in while loop
    
    // int num, factorial;
    // printf("enter the number to calculate factorial: ");
    // scanf("%d", &num);

    // int i = num-1, input = num;

    // while (i != 1)
    // {
    //     factorial = num*i;
    //     printf("%d  ", factorial);

    //     num = factorial;

    //     i--;
    // }
    // printf("\nThe factorial of %d is %d", input, factorial);
    
}

 