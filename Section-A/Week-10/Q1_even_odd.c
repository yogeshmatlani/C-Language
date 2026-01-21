// Q1: Input 15 integers into an array. Count even and odd numbers and store odd numbers in a new array.

#include <stdio.h>

int main()
{
    int arr[15];
    int even = 0, odd = 0;

    // this loop input element for 15 times and store in arr[]. it also calculate even and odd values based on if-else conditions
    for (int i = 0; i < 15; i++)
    {
        printf("Enter the Element on index[%d]: ", i);
        scanf("%d", &arr[i]);

        // this condtion check if element is divisible by 2 and remainder is 0 then increase even else increase odd
        if ((arr[i] % 2) == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    puts(""); // this is just for new line

    int n = 0;
    int odds_array[odd];

    // this loop excute for 15 times and check only odd value and store in new array odds_array[]
    for (int i = 0; i < 15; i++)
    {
        if (arr[i] % 2 != 0)
        {
            odds_array[n] = arr[i];
            printf("%d ", odds_array[n]);
            n++;
        }
    }

    printf("\n\nThe Total Odd Numbers are: %d", odd);
    printf("\nThe Total Even Numbers are: %d", even);
}
