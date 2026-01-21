// Q2: Write a function to calculate the average of array elements.

#include <stdio.h>

// user defined funtion, name: avg. take total sum and no of tarm and calculate average.
float avg(float sum, int terms)
{
    // so calculate average using average formula.

    float average = sum / terms;

    return average;
}

int main()
{
    // a fixed float array that can contains both number int and float
    float arr[10] = {1, 2, 2.2, 4, 5, 3.5, 7, 8, 9, 10};
    float sum = 0; // sum can be float or decimal because array can contain decimal values
    int i = 0;

    // this loop calculate the total sum.
    for (i = 0; i < 10; i++)
    {
        sum = sum + arr[i];
    }

    // i is already number of terms. sum stored total total sum of array. both pass to function and assign the retern average.
    float result = avg(sum, i);

    printf("The average of array is: %.2f", result);
}