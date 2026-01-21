
#include <stdio.h>

int main()
{
    int range = 8;
    int spc = range - 1;

    // this outer loop excute for 8 times vertically (8 rows)
    for (int ver = 1; ver <= 8; ver++)
    {
        // this loop work horizontally and it depend on range (range increase by 1 after every iteration)
        for (int hor = 1; hor <= range; hor++)
        {

            if (ver % 2 != 0) // this condtion controll the odds number line
            {
                if (hor <= spc) // this condition create white spaces from left side.
                {
                    printf(" ");
                }
                else // else excute ternary operator in print statement. (if n is even print space else print *)
                {
                    printf(hor % 2 == 0 ? " " : "*");
                }
            }
            else if (ver % 2 == 0) // this condition controll the evens number line
            {
                if (hor <= spc)
                {
                    printf(" ");
                }
                else // this else have same print and ternary but it works not same of above (if n is odd print space else print *)
                {
                    printf(hor % 2 != 0 ? " " : "*");
                }
            }
        }
        printf("\n");

        // range controll right side and spc controll left side to create a half diamond shape
        range++;
        spc--;
    }
}
