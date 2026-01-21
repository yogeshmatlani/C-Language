#include <stdio.h>

// A user defined void function inputMarks that take array and n means size of array.
void inputMarks(int *arr, int n)
{
    // this loop excute for n times and input marks and store in arr with help of pointer.
    for (int i = 0; i < n; i++)
    {
        printf("\n------- Student no:%d ---------\n",i+1);
        printf("Enter marks of student: ");
        scanf("%d", arr + i);
    }
}
// A user defined int function inputMarks that take array and n means size of array. for find highest marks.
int highest(int *arr, int n)
{
    // max assume the marks. that is on 0 index.
    int max = *arr;

    // this loop excute for n times and find the highest marks based on conditions.
    for (int i = 1; i < n; i++)
    {
        if (*(arr + i) > max)
            max = *(arr + i);
    }
    return max;
}

// A user defined int function that take array and n means size of array and also terms. for find lowest marks.
int lowest(int *arr, int n)
{
    int min = *arr;

    // this loop excute for n times and find the lowest marks based on conditions.
    for (int i = 1; i < n; i++)
    {
        if (*(arr + i) < min)
            min = *(arr + i);
    }
    return min;
}

// A user defined float function that take array and n terms. for calculate average of marks.
float average(int *arr, int n)
{
    int sum = 0;

    // fisrt calculate sum of marks
    for (int i = 0; i < n; i++)
        sum += *(arr + i);

    // return the formula calculation of average total devide no of terms
    return (float)sum / n;
}

int main()
{
    int marks[50], n;

    printf("Enter Number of Students: ");
    scanf("%d", &n);

    // pass the array and no of std to take input their marks.
    inputMarks(marks, n);

    // pass array and n terms to calculate and print the highest mark lowest and average

    printf("\n------- The Total Calculation --------\n\n");
    printf("Highest Marks: %d\n", highest(marks, n));
    printf("Lowest Marks: %d\n", lowest(marks, n));
    printf("Average Marks: %.2f\n", average(marks, n));

    return 0;
}
