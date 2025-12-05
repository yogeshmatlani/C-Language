/* 
----@----
---@@@---
--@@@@@--
-@@@@@@@-
@@@@@@@@@
-@@@@@@@-
--@@@@@--
---@@@---
----@----
*/


#include <stdio.h>

int main()
{

    int horizontal = 5, inc = 1, hor_inc_dec = 4;
    int left_desh = horizontal - 1, right_desh = horizontal;

    for (int vertical = 1; vertical <= 9; vertical++)                    // this loop Iterate vertically for 9 times because vertical variable assigned value 9. (9 vertically lines)
    {
        for (int n = 1; n <= horizontal; n++)                            // this loop Iterate horizontally and it depends on horizontal = 5 and horizontal change for each line
        {
            if (n == right_desh)                                         // this condition to change the horizontal with diffirent values
            {
                horizontal += hor_inc_dec;                                 
            }

            printf(n <= left_desh || n > right_desh ? "-" : "@");
        }
        horizontal -= hor_inc_dec;
        printf("\n");

        if (horizontal == 9)                                        // this condition for horizontal. before horizontal == 9 horizontal is increasing and after = 9 it is decreasing
        {
            inc = -1;                                         // when horizontal == 9 then inc variable asign new value -1. where veriables += inc means --> veriable +- 1 or verable --1
        }

        hor_inc_dec -= inc;                         //  this all below veriables increasing or decreasing value by 1. --->  5 + 1 = 6  or 5 - -1 = 4 
        left_desh -= inc;
        horizontal += inc;
        right_desh += inc;
    }
}



/*
----5----
---456---
--34567--
-2345678-
123456789
-2345678-
--34567--
---456---
----5----
*/

/*  //------------------this code is commented-------------------

#include <stdio.h>

int main()
{

    int horizontal = 5, inc = 1, left_inc_dec = 4;
    int left_desh = horizontal - 1, right_desh = horizontal;

    for (int vertical = 1; vertical <= 9; vertical++)
    {
        for (int n = 1; n <= horizontal; n++)
        {
            if (n == right_desh)
            {
                horizontal += left_inc_dec;
            }

            printf(n <= left_desh || n > right_desh ? "-" : "%d", n);
        }
        horizontal -= left_inc_dec;
        printf("\n");

        if (horizontal == 9)
        {
            inc = -1;
        }

        left_inc_dec -= inc;
        left_desh -= inc;
        horizontal += inc;
        right_desh += inc;
    }
}

*/

/*
----V----
---UVW---
--TUVWX--
-STUVWXY-
RSTUVWXYZ
-STUVWXY-
--TUVWX--
---UVW---
----V----
*/

/*   //------------------this code is commented----------------------

#include <stdio.h>

int main()
{



    int horizontal = 86, inc = 1, left_inc_dec = 4;
    int left_desh = horizontal - 1, right_desh = horizontal;

    for (int vertical = 1; vertical <= 9; vertical++)
    {
        for (char n = 82; n <= horizontal; n++)
        {
            if (n == right_desh)
            {
                horizontal += left_inc_dec;
            }

            printf(n <= left_desh || n > right_desh ? "-" : "%c", n);
        }
        horizontal -= left_inc_dec;
        printf("\n");

        if (horizontal == 90)
        {
            inc = -1;
        }

        left_inc_dec -= inc;
        left_desh -= inc;
        horizontal += inc;
        right_desh += inc;
    }
}
*/
