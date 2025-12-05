#include<stdio.h>

int main()
{
    int horizontal = 5, inc = 1;
    int spc = horizontal-1;

    for (int vertical = 1; vertical <= 9; vertical++)       // this outer loop iterate vartically for 9 time or 9 lines because veriable vertical = 9
    {
        for (int n = 1; n <= horizontal; n++)               // this inner loop iterate horizontally. range depends on veriable horizontal = 5 and value of it to change after each line
        {
            printf(n <= spc ? " " : "*");                   // in parentheses of printf. this is a ternary operator. works like if-else condition
        }
        printf("\n");

        if (horizontal == 9)                              // this condition for change the value of inc veriable. when horizontal will be 9 from 5 after increment then go to inside block
        {
            inc = -1;                                       // inc variable change the value 1 to -1. to controll increament and decreament. like 5 + 1 = 6 or 5 + -1 = 4
        }   
        
        horizontal += inc;                                  // horizontal changing the value after each line. before horizontal = 9 it is increasing and after = 9 it is decreasing
        spc -= inc;                                         // 
    }
    
}


// --------------------- Same Diamond Code in Number Form ------------------------
/*
#include<stdio.h>

int main()
{
    int horizontal = 5, inc = 1;
    int spc = horizontal-1;

    for (int vertical = 1; vertical <= 9; vertical++)
    {
        for (int n = 1; n <= horizontal; n++)
        {
            printf(n <= spc ? " " : "%d", n);
        }
        printf("\n");

        if (horizontal == 9)
        {
            inc = -1;
        }
        
        horizontal += inc;
        spc -= inc;
    }
    
}
*/


// ------------------- Same Diamond Pattern Code in Letters Form (ASCI) --------------------
/*
#include<stdio.h>

int main()
{
    int horizontal = 69, inc = 1;
    int spc = horizontal-1;

    for (int vertical = 1; vertical <= 9; vertical++)
    {
        for (char n = 65; n <= horizontal; n++)
        {
            printf(n <= spc ? " " : "%c", n);
        }
        printf("\n");

        if (horizontal == 73)
        {
            inc = -1;
        }
        
        horizontal += inc;
        spc -= inc;
    }
    
}
*/