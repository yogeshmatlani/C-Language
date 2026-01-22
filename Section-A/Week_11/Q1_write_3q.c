// Writing to a File: Write a C program that takes user input for a name and age and writes this
// information to a file named "userData.txt". Ensure that the program can handle multiple entries
// and appends each new entry to the file.

#include <stdio.h>

int main()
{
    // FILE *p = fopen("C:\\VSCode\\C\\FILE HANDLE\\userData.txt", "a");

    // char name[25];
    // int age;

    // printf("Enter the name: ");
    // fgets(name, 25, stdin);
    // printf("Enter the age: ");
    // scanf("%d", &age);

    // if (p == NULL)
    // {
    //     printf("Not Founded");
    //     return 0;
    // }

    // fprintf(p, "Name: %s", name);
    // fprintf(p, "Age: %d\n\n", age);

    // fclose(p);
    //---------------------------------------------------------
    // FILE *p;

    // char name[25];
    // int age;

    // p = fopen("C:\\VSCode\\C\\FILE HANDLE\\userData.txt", "r");

    // if (p == NULL)
    // {
    //     printf("Not Founded");
    //     return 0;
    // }

    // char ch;
    // while ((ch = fgetc(p)) != EOF)
    // {
    //     putchar(ch);
    // }

    // fclose(p);
    //---------------------------------------------------------

//     FILE *sourceFile, *destinationFile;
//     char ch;

//     // Open the source file in read mode
//     sourceFile = fopen("C:\\VSCode\\C\\FILE HANDLE\\userData.txt", "r");

//     if (sourceFile == NULL)
//     {
//         printf("Error opening source file!\n");
//         return 1; // Return an error code
//     }

//     // Open the destination file in write mode
//     destinationFile = fopen("C:\\VSCode\\C\\FILE HANDLE\\destination.txt", "w");

//     if (destinationFile == NULL)
//     {
//         printf("Error opening destination file!\n");
//         fclose(sourceFile); // Close the source file
//         return 1;           // Return an error code
//     }

//     // Copy the contents character by character
//     while ((ch = fgetc(sourceFile)) != EOF)
//     {
//         fputc(ch, destinationFile);
//     }

//     // Close the files
//     fclose(sourceFile);
//     fclose(destinationFile);

//     printf("File copied successfully!\n");

//     return 0; // Return success
// }
