// Q5: Input a sentence and count uppercase letters, lowercase letters, and digits.

#include <stdio.h>
#include <stdio.h>

int main()
{
    char str[100];
    int digit = 0, upper = 0, lower = 0;

    printf("------- Calculate UpperCase, LowerCase, and digits --------\n\n");

    printf("Write Something: \n");
    // gets(str);
    fgets(str, sizeof(str), stdin);

    // this loop excutes for the end string and calculate upper case and lower case and digits in string based on ascii code
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 65 && str[i] <= 90) // UpperCase letter are between 65 and 90. if string character's ascii match then increase upper++;
        {
            upper++;
        }
        else if (str[i] >= 97 && str[i] <= 122) // LowerCase letter are between 65 and 90. if string character's ascii match then increase lower++;
        {
            lower++;
        }
        else if (str[i] >= 48 && str[i] <= 58) // Digits letter are between 48 and 58. if string character's ascii match then increase digit++;
        {
            digit++;
        }
    }

    // print the all calculated from string.
    printf("\nTotal upper case: %d\nTotal lower case: %d\nTotal digits: %d", upper, lower, digit);
}