#include <stdio.h>

int main()
{
    // access the file in p.
    // fopen function open and created  new file.
    FILE *p = fopen("Numbers.txt", "w");
    int arr[10];

    // check does file exist. if not exist return the function
    if (p == NULL)
    {
        printf("File Not Founded");
        return 0;
    }

    // take 10 integer as input and store in array.
    for (int i = 0; i < 10; i++)
    {
        printf("Enter the integer on index[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    // print in file
    for (int i = 0; i < 10; i++)
    {
        fprintf(p, "%d ", arr[i]);
    }

    fclose(p);

    printf("Data Added Successfully");
}
