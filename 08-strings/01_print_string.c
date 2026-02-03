// Write a program to take string input from user by using scanf and gets and print on console using printf
// and puts.

#include<stdio.h>
#include<string.h>

int main()
{
    char str[50];

    printf("Enter Your Name: ");
    scanf("%s", &str);

    for (int i = 0; i < strlen(str); i++)
    {
        printf("%c", str[i]);
    }
    
}