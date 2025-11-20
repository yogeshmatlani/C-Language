// Write a program that will print the following pattern:
// 1********
// 12*******
// 123******
// 1234*****
// 12345****
// 123456***
// 1234567**
// 12345678*
// 123456789

#include<stdio.h>

int main()
{
    int num = 1;

    for (int row = 1; row <= 9; row++)
    {
        for (int ast = 1; ast <= 9; ast++)
        {
            printf(ast <= num ? "%d" : "*", ast);
        }
        printf("\n");
        num++;
    }
    
}
 