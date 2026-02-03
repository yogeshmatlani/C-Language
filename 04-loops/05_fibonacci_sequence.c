// Write a program to generate the Fibonacci sequence up to a specified number of terms using a for
// loop. Allow the user to choose the number of terms to generate.

#include<stdio.h>

int main()
{
    int first_term = 0, second_term = 1, seq;

    for (int i = 1; i <= 15; i++)
    {
        printf("%d ", first_term);
        
        seq = first_term+second_term;
        first_term = second_term;
        second_term = seq;

    }   


    // same sequence generate in while loop

    // int first_term = 0, second_term = 1, seq, i = 1;

    // while (i <= 15)
    // {
    //     printf("%d  ", first_term);

    //     seq = first_term + second_term;
    //     first_term = second_term;
    //     second_term = seq;

    //     i++;
    // }
    
}