/*
 @ 
 @  @
 @  @  @
 @  @  @  @
 @  @  @  @  @
 @  @  @  @  @  @
 @  @  @  @  @  @  @
 @  @  @  @  @  @  @  @
 @  @  @  @  @  @  @  @  @
 */



#include<stdio.h>

int main()
{
    for (int vertical = 1; vertical <= 9; vertical++)
    {
        for (int n = 1; n <= vertical; n++)
        {
            printf(" @ ");
        }
        printf("\n");
    }

}


// The Inverted Right Tringle

/*
 @  @  @  @  @  @  @  @  @ 
 @  @  @  @  @  @  @  @
 @  @  @  @  @  @  @
 @  @  @  @  @  @
 @  @  @  @  @
 @  @  @  @
 @  @  @
 @  @
 @
*/
 
/*
#include<stdio.h>

int main()
{
    for (int vertical = 9; vertical >= 1; vertical--)
    {
        for (int ast = 1; ast <= vertical; ast++)
        {
            printf(" @ ");
        }
        printf("\n");
    }

}
*/