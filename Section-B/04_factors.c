#include <stdio.h>

int main()
{

    for (int n = 2; n <= 100; n++)
    {
        printf("%d: ", n);

        for (int factor = 2; factor <= n; factor++)
        {
            if (n % factor == 0)
            {
                printf("%d ", factor);
            }
        }
        printf("\n");
    }
}