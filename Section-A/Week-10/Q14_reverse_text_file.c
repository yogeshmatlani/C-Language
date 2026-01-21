//Q14: Read a text file and print its contents in reverse order (character by character).

#include<stdio.h>
#include<string.h>

int main()
{
    // accessing file pointer and assign fopen().
    // using two modes "w+" file created and will read.
    FILE* ptr = fopen("text.txt","w+");
    char str[100];

    // check file does exist or not.
    // if not return; end the main function.
    if(ptr == NULL)
    {
        printf("File Not Founded");
        return 0;
    }

    // take input as text and store in file
    printf("Enter the text: \n");
    fgets(str,100,stdin);

    // print in console
    fprintf(ptr,"%s",str);

    // files closed.
    fclose(ptr);

    printf("Data successfully Inserted");


    // again check file does exist.
    if(ptr == NULL)
    {
        printf("File Not Founded");
        return 0;
    }

    // this loop print text from stored in str
    while(fgets(str,100,ptr) != NULL)
        printf("%s", str);


    int size = strlen(str);

    // this loop excute for half size of string. swap or reverse.
    // j is last index and i is 1st.
    for(int i = 0, j = size-1; i <= j; i++,j--)
    {
        // this is swaping formula.
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;


    }

    // print after swap.
    printf("\n-------- The Reverse Order --------\n");
    printf("%s", str);



    return 0;
}
