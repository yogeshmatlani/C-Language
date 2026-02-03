#include <stdio.h>

int main()
{
    FILE *ptr;
    char str[100];

    ptr = fopen("text.txt","r");

    if (ptr == NULL) {
        printf("File does not exist or cannot be opened.");
        return 0;
    }

    while(fgets(str, 100, ptr) != NULL)
        printf("%s", str);
 
    FILE* ptr= fopen("matlani.txt","w");
}