/*
*               * 
  *           *
    *       *
      *   *
        *
      *   *       
    *       *
  *           *
*               *
*/

#include <stdio.h>

int main()
{
    int n = 17, i = 1, inc = 2; 

    for (int vertical = 1; vertical <= 10; vertical++)
    {
        for (int ast = 1; ast <= 18; ast++)
        {
            printf(ast == i || ast == n ? "*" : " ");
        }
        printf("\n");

        i += inc;
        n -= inc;
    }
}
 
 