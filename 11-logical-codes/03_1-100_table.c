#include <stdio.h>

int main()
{
    int table, start, end, n;

    for (start = 1; start <= 100; start += 10)
    {
        end = start + 9;

        for (n = 1; n <= 10; n++)
        {
            for (table = start; table <= end; table++)
            {
                printf("%d X %2d = %3d\t", table, n, table * n);
            }
            printf("\n");
        }
        puts("");
    }
}