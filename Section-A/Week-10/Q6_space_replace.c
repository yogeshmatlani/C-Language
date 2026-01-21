// Q6: Replace all spaces in a string with underscores (_) without using string library functions.

#include <stdio.h>

int main()
{
    char str[100];

    printf("Write Something: \n");
    // fgets function take inputs from user and store in str string.
    fgets(str, 100, stdin);

    // this loop excute till the end of string. check if str's character == space(ascii = 32) replace the underschore(ascii = 95)
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 32)
        {
            str[i] = 95;
        }
    }

    printf("------- White Spaces Replaced With Underscore -------- \n\n");

    printf("%s", str);
}