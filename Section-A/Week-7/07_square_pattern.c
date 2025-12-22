#include<stdio.h>

int main()
{
    int size;
    int counter = 1;

    printf("Enter odd number to generate sqare: ");
    scanf("%d", &size);

    int arr[size][size];

    for (int i = 0; i < size; i++)
    {
        for (int n = 0; n < size; n++)
        {
            arr[i][n] = counter;
            counter++;
        }           
        
    }
    
    printf("\n");

    for (int i = 0; i < size; i++)
    { 
        for (int n = 0; n < size; n++)
        {
            printf("%-2d ", arr[i][n]);
        }
        printf("\n");
    }
    
}
