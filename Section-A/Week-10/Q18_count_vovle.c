// Q18: Count vowels in a string using pointers.

#include <stdio.h>

int main()
{
    char str[100];

    // take string input from user. and store in str with help of fgets function.
    printf("Write Anything to calculate vowels: \n");
    fgets(str, 100, stdin);

    // declaer and intilaization of pointer with str[] string.
    char *p = str;
    int vowels = 0;

    
    for (int i = 0; *p != '\0'; i++)
    {
        // condtion check a string character in pointer is vowel (a,e,i,o,u || A,E,I,O,U) . if true increase vewels++;
        if ((*p == 65 || *p == 97) || (*p == 69 || *p == 101) || (*p == 73 || *p == 105) || (*p == 79 || *p == 111) || (*p == 85 || *p == 117))
        {
            vowels++;
        }
        // this is increase the memory address.
        p++;
    }

    printf("\nThe total vowels in string: %d", vowels);
}
