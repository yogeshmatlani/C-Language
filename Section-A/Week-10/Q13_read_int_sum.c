//Q13: Read Numbers.txt and calculate the sum of all stored numbers.

#include<stdio.h>

int main()
{
    FILE* ptr = fopen("Numbers.txt","r");

    if(ptr == NULL)
    {
        printf("File Not Founded");
        return 0;
    }

    int sum;
    int num;

    while (fscanf(ptr, "%d", &num) != EOF)
    {
        sum = sum + num;
    }


    fclose(ptr);

    printf("\nThe total sum of integer: %d", sum);

}
