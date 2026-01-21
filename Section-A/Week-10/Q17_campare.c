#include <stdio.h>

int main()
{
    char str1[50], str2[50];
    int i = 0, x = 1;

    // take string input from user with help of fgets.
    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    // check from to the end of string of both str1 and str2.
    while (str1[i] != '\0' || str2[i] != '\0')
    {
        // this condition check str2 if any character is missing or not match. from str1. then x = 1  and break the loop.
        if (str1[i] != str2[i])
        {
            x = 0;
            break;
        }
        i++;
    }

    //  this condition check if x == 1 string are equal else string are not equal
    if (x == 1)
        printf("Strings are equal");
    else
        printf("Strings are not equal");

    return 0;
}
