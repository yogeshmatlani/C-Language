// Q8: Input 10 integers and find the second largest element.

#include <stdio.h>

int main()
{

    printf("-------- Calculate Second Largest Element -----------\n\n");
    int arr[10];
    int large = 0;

    // this loop take input elements and store on indexes of array and check every input element is greater than large. if true then store it in large.
    for (int i = 0; i < 10; i++)
    {
        printf("Enter the element on index[%d]: ", i);
        scanf("%d", &arr[i]);

        if (arr[i] >= large)
        {
            large = arr[i];
        }
    }

    // intialize the second_large with 0 index's value
    int second_large = arr[0];

    // largest element stored in large. now this loop check for only second large and not equal large and store in veriable
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] >= second_large && arr[i] != large)
        {
            second_large = arr[i];
        }
    }

    printf("\nThe second largest element in array: %d", second_large);
}
