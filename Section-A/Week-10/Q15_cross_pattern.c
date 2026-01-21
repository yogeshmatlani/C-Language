#include <stdio.h>

int main()
{
    int n = 0, inc = 1, ast = 0, inc2 = 1;

    // this outer loop excute for 5 vertical lines.
    for (int ver = 1; ver <= 5; ver++)
    {
        // n calculate the line in every ittration.
        n += inc;
        // inner loop excute for 5 horizontal colomns
        for (int hor = 1; hor <= 5; hor++)
        {
            // ast calculate the coloums in every iterations
            ast += inc2;
            // this condition check vertical line == horizontal colom if true
            printf(ast == n ? "%d" : " ", ast);

            // this condtion check if col is 3 inc2 reasign -1 in inc2 (before condtion true it increase by 1 and not decrease by 1) for 1 2 3 2 1.
            if (hor == 3)
            {
                inc2 = -1;
            }
        }
        inc2 = 1;
        ast = 0;

        // same thing works like above conditon but it just for veritcal lines. (1 2 3 2 1). when inc aasign -1 then (plus + minus = -) start decreasing.
        if (ver == 3)
        {
            inc = -1;
        }
        printf("\n");
    }
}
