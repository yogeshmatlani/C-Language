#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void reversePrintWor(char *word)
{
    // Print each character of the word in reverse order
    for (int i = strlen(word) - 1; i >= 0; i--)
    {
        printf("%c", word[i]);
    }
}

int main()
{
    FILE *file;
    char word[50];

    // Open the file in read mode
    file = fopen("C:\\VSCode\\C\\FILE HANDLE\\userData.txt", "r");

    if (file == NULL)
    {
        printf("Error opening file!\n");
        return 1; // Return an error code
    }

    // Read and print each word in reverse order
    while (fscanf(file, "%s", word) == 1)
    {
        reversePrintWor(word);
        printf(" "); // Add a space after each reversed word
    }

    // Close the file
    fclose(file);

    return 0; // Return success
}
