// Q16: Merge two arrays into a third array.

#include <stdio.h>

int main()
{
    // hare are 2 fixed array. with 5 size.
    int a[5] = {1, 2, 3, 4, 5};
    int b[5] = {6, 7, 8, 9, 10};
    // 3rd array has size 10 because a and b have 5 so 5+5=10.
    int c[10];
    int n = 0;

    // this loop excute for 10 time becasue elements are 10.
    for (int i = 0; i < 10; i++)
    {
        // this if condition check is i less than 5 ? because element of a[] are 5. and assign 5 element in c[] on same intial index 0-4.
        if (i < 5)
        {
            c[i] = a[i];
        }
        else // else assign b[] in c[] on index n. n intialized 0 and increase after assign. so n index (0-4).
        {

            c[i] = b[n];
            n++;
        }

        // print element of array c in every iteration and after assigned element on index
        printf("%d ", c[i]);
    }
}
