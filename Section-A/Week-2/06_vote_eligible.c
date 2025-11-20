// Write a program to print “You can vote” if the voter’s age is 18, otherwise print “You are not eligible”.

#include<stdio.h>

int main()
{
    int age;

    printf("enter your age: ");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("you are eligible for vote");
    }
    else{
        printf("you are not eligible for vote");
    }
}