/*
2 X  2 =   4
2 X  3 =   6
2 X  4 =   8
2 X  5 =  10
2 X  6 =  12
2 X  7 =  14
2 X  8 =  16
2 X  9 =  18
2 X 10 =  20
2 X 11 =  22
2 X 12 =  24
*/

#include<stdio.h>

int main()
{
    int table = 2, num;

    for (num = 1; num <= 12; num++)
    {
        printf("%d X %2d = %3d\n", table, num, table*num);
    }
    
}